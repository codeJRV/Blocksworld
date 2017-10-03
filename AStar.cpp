//
// Created by jrv on 9/23/17.
//

#include "AStar.h"

bool AStar::AStarSearch(Node *start,int heuristic, int itr_max) {

    if (start->IsGoal())
        return true;

    start->g = 0;
    start->h = 0;
    start->f = 0;
    start->parent = nullptr;


    int itr  = 1 ;
    int frnt = 1 ;
    int goal_test = 0;
    frontier.push(start);

    while(!frontier.empty())
    {
        int size = (int)frontier.size();
        frnt = max(frnt, size);

        Node* bestOption = frontier.top();
        frontier.pop();

        if(bestOption->IsGoal())
        {
            //print the results
            cout<<"\nYaay Goooalll\n";
            bestOption->PrintNode();



            cout<<"\n Path to goal: \n";
            PrintPath(bestOption);

            cout<<"\nSize of queue           : "<<frontier.size()<<"\n";
            cout<<"\nNumber of Iterations    : "<<itr<<"\n";
            cout<<"\nNumber of Nodes         : "<<nodeList.size()<<"\n";
            cout<<"\nNumber of Goal Tests    : "<<goal_test<<"\n";

            return true;
        }
        else
        {   goal_test ++;
            ++itr;

            if(itr == itr_max ) {
                cout <<"\n AStar search failed to find the goal in "<< itr_max<<"iterations \n";
                cout <<"Last node computed is : \n";
                bestOption->PrintNode();
                return false;
            }
            else
            {   cout<<itr<<endl;
                Tree SearchTree;
                Heirustic myheuristic;
                vector<Node*> successors;
                successors = SearchTree.GenerateSuccessors(bestOption);

                //Lets start the grind ;)
                for(int i =0; i<successors.size(); i++)
                {
                    int isExistingNode = SearchTree.Exists(successors[i]);

                    if( isExistingNode == -1)
                    {
                        //calculate its f,h,g values for the first time
                        successors[i]->h = myheuristic.ComputeH(successors[i],heuristic);
                        successors[i]->g = bestOption->g + 1;
                        successors[i]->f = successors[i]->g + successors[i]->h;
                        successors[i]->parent = bestOption;
                        frontier.push(successors[i]);
                        nodeList.push_back(successors[i]);
                    }
                    else
                    {
                        //update f,h,g values if it has a worse f than existing
                        if(successors[i]->g > bestOption->g +1)
                        {
                            successors[i]->parent = bestOption;
                            successors[i]->h = myheuristic.ComputeH(successors[i],heuristic);
                            successors[i]->g = bestOption->g + 1;
                            successors[i]->f = successors[i]->g + successors[i]->h;

                            vector<Node*> temp;
                            while(!frontier.empty())
                            {   temp.push_back(frontier.top());
                                frontier.pop();
                            }

                            for(int j=0; j<temp.size(); j++)
                                frontier.push(temp[j]);

                        }

                    }

                }

            }

        }

    }

}


void AStar::PrintPath(Node* n ) {

    vector <Node*> path;
    Node * myNode = n;
    while(myNode)
    {
        path.push_back(myNode);
        myNode = myNode->parent;
    }

    int depth = path.size()-1;

    cout<<"\nStarting : \n";
    while(!path.empty())
    {
        myNode = path.back();
        path.pop_back();
        myNode->PrintNode();

    }

    cout<<"\n\nSolution found at depth : "<<depth<<"\n";


}