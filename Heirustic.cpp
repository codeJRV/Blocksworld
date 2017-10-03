//
// Created by jrv on 9/23/17.
//

#include "Heirustic.h"

float Heirustic::ComputeH(Node *N,int h_number) {

    /*
     *
     * Heuristics description:
     *
     * Heuristic 1 - this heuristic calculates the number of blocks that are currently not in the correct 'position'.
     * We do not count a block if it is currently in the arm of the crane.
     *
     * Heuristic 2 - this heuristic is similar to Heuristic 1. It calculates the difference between the current state
     * and the goal state, but looks at the details of each block. If Block A in the goal state is supposed to be on top
     * of Block B and under Block C and in the current state it is neither on top of B or under C, then we add 2 to the
     * heuristic.
     *
     * Heuristic 3 - This heuristic adds 2 for every block that is not currently directly on top of the block on which
     * it has to be in the goal state or if there is such a block somewhere below it (in the same pile).
     *
     * Heuristic 4 - this heuristic is twice the number of blocks that must be moved once plus four times the number of
     * blocks that must be moved twice. A block that must be moved once is a block that is currently on a block different
     * to the block upon which it rests in the goal state or a block that has such a block somewhere below it in the same
     * pile. A block that must be moved twice is a block that is currently on the block upon which it must be placed in the
     * goal state, but that block is a block that must be moved or if there exists a block that must be moved twice
     * somewhere below it (in the same pile).
     *
     * Heuristic 5 - If blocks A and B are preventing each other from being moved to their goal positions, we call this
     * a case of mutual prevention. This heuristic works the same way as heuristic 3, but adds 2 for each case of mutual
     * prevention.
     *
     * Heuristic 6 - This heuristic is a combination of heuristics 4 and 5, except when there is a block that must be
     * moved twice (heuristic 4) and is also one of the blocks in a mutual prevention (heuristic 5), we don't add anything
     * for this mutual prevention.
     *
     *
     */

    float penality = 0.0;


    if(h_number == 1)
    {

        for (int i = 0; i < N->n_stacks; i++) {
            for (int j = 0; j < N->block[i].size(); j++) {
                int abs = (int) N->block[i][j];
                if ((abs - 65) == j && i == 0) {
                    penality += 0.0;
                } else {
                    penality += 1;
                }
            }
        }

    }


    if(h_number == 2)
    {
        //lets check for adjacency in stacking and position
        for (int i = 0; i < N->n_stacks; i++) {
            for (int j = 0; j < N->block[i].size(); j++) {
                int abs = (int) N->block[i][j];
                if ((abs - 65) == j && i == 0) {
                    penality += 0.0;

                    if((( abs -65) > 0 ) && ((abs-65)< N->n_blocks))   //ie not the first and last block by name
                    {
                        if( ((j-1) >= 0 ) && ((j+1) <= N->block[i].size() ))  //ie not the first and last block in the stack
                        {
                            int prev = (int) N->block[i][j-1];
                            int next = (int) N->block[i][j+1];

                            if ( prev != abs - 1 && next != abs + 1 )
                                penality +=2;


                        }
                    }

                } else {
                    penality += 1;
                }
            }
        }



    }


    if( h_number == 3)
    {


        //Heuristic :  blocks below a block on the stack should have lesser value than the block
        for (int i = 0; i < N->n_stacks; i++) {
            for (int j = 0; j < N->block[i].size(); j++) {

                int abs = (int) N->block[i][j];

                if(j>0)
                {
                    for (int l = j; l <=0; l--)
                    {
                        int lower = (int) N->block[i][l];

                        if(lower<abs)
                            penality += 1;


                    }

                }



            }
        }
    }

    if(h_number == 4)
    {

        for (int i = 0; i < N->n_stacks; i++) {

            int stack_size =   N->block[i].size();

            if(i!=0) {

                for (int j = 0; j < stack_size; j++) {
                    for (int k = j; k < stack_size; k++) {


                        int sel_block = (int) N->block[i][j];
                        int above_block = (int) N->block[i][k];
                        if (above_block > sel_block)penality += 2;

                    }

                }
            }



        }



    }


    if(h_number == 5)
    {

        // N->PrintNode();
        for (int i = 0; i < N->n_stacks; i++) {
            for (int j = 0; j < N->block[i].size(); j++) {
                int val = (int) N->block[i][j];
                int manhattan = i + abs(j-(val-65));
                penality += manhattan;

                //cout<<"\n testing"<<(char)val<<" j:"<<j<<" i: "<<i<<" manhattan : "<<manhattan<<"\n";
            }
        }
        //cout<<"\npenality : "<<penality<<endl;
    }

    if(h_number == 6)
    {

        //N->PrintNode();
        for (int i = 0; i < N->n_stacks; i++) {
            for (int j = 0; j < N->block[i].size(); j++) {
                int absolute = (int) N->block[i][j];
                if ((absolute - 65) == j && i == 0) {
                    penality += 0.0;
                } else {


                    //lets calculate steps to get the node out of place
                    int GetOutSteps =(int)N->block[i].size() -  j;
                    //Lets calculate steps to put it in place

                    //scan first stack blocks and pop out every element that's not in right place until the element
                    // then pop out the element in the first stack at its position and finally pop out all the elements above it


                    penality += GetOutSteps ;
                }
            }
        }

    }

    if( h_number == 7)
    {
        int n_stacks = N->n_stacks;
        int n_blocks = N->n_blocks; //total blocks

        vector<vector<int> > block;
        vector<int> stack;

        for (int i = 0; i < N->n_stacks; i++) {
            for (int j = 0; j < N->block[i].size(); j++) {
                int val = (int) N->block[i][j] - 65;
                stack.push_back(val);
            }

            block.push_back(stack);
            stack.clear();
        }



        for(int stack_no = 0; stack_no < n_stacks; stack_no++) {

            int stack_size = (int) block[stack_no].size();
            for (int posn_in_stack = 0; posn_in_stack < stack_size; posn_in_stack++) {

                int element = block[stack_no][posn_in_stack];


                if(stack_no != 0) {
                    int max = block[stack_no][0];
                    for (int i = 0; i < posn_in_stack; i++) {
                        if (block[stack_no][i] > max)
                            max = block[stack_no][i];

                    }

                    int min = block[stack_no][posn_in_stack + 1];
                    for (int i = posn_in_stack + 1; i < stack_size; i++) {
                        if (block[stack_no][i] < min)
                            min = block[stack_no][i];
                    }

                    if (block[stack_no][posn_in_stack] > max)
                        penality += 2;
                    else if (block[stack_no][posn_in_stack] < min)
                        penality += 2;

                    else
                        penality += 1;

                }
                else
                {

                    if(block[0][posn_in_stack] != posn_in_stack)
                        penality += 1;


                }


            }
        }



    }

    if( h_number == 8)
    {
        for(int i = 0; i < N->n_stacks; i++)
        {
            for (int j = 0; j< (int)N->block[i].size(); j++)
            {

                if (i == 0)
                {
                    if (((int)N->block[i][j] - 65) == j)
                        penality += 0;
                    else {
                        float k = j +1 ;
                        float scaling_factor = 1.00;
                        if((float)N->block[i].size() != k )
                            scaling_factor =  (float)N->block[i].size()/((float)N->block[i].size() - k );
                        //cout<<endl<<"sf: "<<scaling_factor<<endl;

                        if(N->n_stacks >3)
                            penality += 2*scaling_factor;
                        else
                            penality += 2;
                    }
                }
                else
                {
                    int above_penality = 0 ;//
                    for(int t = j+1; t<N->block[i].size(); t++)                                //check up
                         if( N->block[i][j] < N->block[i][t]) above_penality = 2;              //  | A B C (D) E F penalize D = 2

                    int below_penality = 0;

                    if(j != 0)
                    for (int s = j-1; s >= 0; s--)
                        if (N->block[i][j] > N->block[i][s]) below_penality = 2;

                    if(above_penality == 2 || below_penality == 2)
                        penality+= 2;
                    else
                        penality+=1;

                }

            }
        }






    }

   //cout<<"\npenality: "<<penality<<"\n";


    return penality;
}
