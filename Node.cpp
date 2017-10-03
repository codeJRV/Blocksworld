//
// Created by jrv on 9/22/17.
//

#include "Node.h"

using namespace std;

Node::Node(int b, int s)
{
    //cout<<"Node Created"<<endl;
    parent = nullptr;
    n_blocks = b;
    n_stacks = s;

    g = 0.0;
    h = 0.0;
    f = 0.0;
    visited = false;

    vector<vector<char> > block;
    vector<char> stack;

    for(int i = 0; i < s; i ++)
        block.push_back(stack);


}

void Node::PrintNode() {


    if(block.size() != 0 && n_blocks != 0)
    {
        cout << "===== ( " << n_blocks << " blocks on " << n_stacks << " stacks ) =====" << endl;

        for (int i = 0; i < n_stacks; i++) {
            cout << i << " | ";
            for (int j = 0; j < block[i].size(); j++) {
                cout << block[i][j] << " ";
            }
            cout << endl;
        }

        cout << "===== ( f = " << f << ", g = " << g << ", h = " << h << " ) =====";
    }
    else
    {
        cout<<"Empty block";
    }

}

void Node::RandomPuzzle( int n_moves , bool beVerbose)
{


    cout<<"\ngenerating random Puzzle\n";
    block.clear();
    //PrintNode();


    vector<char> stack;


    for ( int i =0 ; i < n_blocks ; i++)
        stack.push_back((char)(i + 65));

    for (int i = 0 ; i < n_stacks; i++) {
        block.push_back(stack);
        stack.clear();
    }

    //PrintNode();
    srand (time(NULL));

    while (n_moves)
    {
        int stack_A = rand( ) % n_stacks;
        int stack_B = rand( ) % n_stacks;

        if(block[stack_A].size() && stack_A!=stack_B)
        {
            char element = block[stack_A].back();
            block[stack_A].pop_back();
            block[stack_B].push_back(element);
            if(beVerbose)
                PrintNode();
            n_moves--;
        }

    }


    cout<<"\nrandom Node is :\n";
    PrintNode();

}

bool Node::IsGoal()
{
    //we know that the goal node has all the elements in  the first stack in ABCDE...order and nothing in the other stacks
    //hence we check this.

    if(block[0].size() != n_blocks)
        return false;

    for(int i = 0; i < n_blocks;  i++)
        if(block[0][i] != char(i+65) )
            return false;

    return  true;
}



void Node::ClearNode()
{
    //we need to manually clear the nodes stack because block.clear still retains garbage values
    if(block.size())
    for( int i = 0; i < n_stacks; i++)
        block[i].clear();
}

