//
// Created by jrv on 9/23/17.
//

#include "Tree.h"
#include "Node.h"



vector<Node*> Tree::GenerateSuccessors(Node* start) {


    //here to generate successors we create new nodes and add them to the nodeTree
    //for each stack of the node we pop the topmost element and put in the other stacks and create all possible configurations

    Node *successor = new Node(start->n_blocks, start->n_stacks);
    vector<Node*> successorList;
    if(start->n_blocks)
    {
        for(int i = 0; i<start->n_stacks; i++ )
        {
            if(!start->block[i].empty())
            {
                char element = start->block[i].back();
                start->block[i].pop_back();                      //Temporarily remove the element

                for(int j = 0; j < start->n_stacks; j++ )
                {
                    if( i != j )
                    {

                        successor->ClearNode();
                        successor->block = start->block;
                        successor->block[j].push_back(element);
                        successor->parent = start;
                        int existLocation = Exists(successor);

                        if( existLocation == -1) {
                            Node *childNode = new Node(start->n_blocks, start->n_stacks);
                            childNode->block = successor->block;
                            childNode->parent = successor->parent;
                            start->visited = true;//when you generate successors the parent will be already visited
                            //nodeList.push_back(childNode);
                            successorList.push_back(childNode);
                            // cout << "\nNew child Pushed to nodeList\n";
                        }
                        else
                            successorList.push_back(nodeList[existLocation]);


                    }

                }

                start->block[i].push_back(element);       //Replace the removed element
            }

        }
    }
    return successorList;

}

int Tree::Exists(Node* n1){


    for( int p = 0; p < nodeList.size(); p++ ) {

        Node* nodeList_element = nodeList[p];
        bool exists = true;

        for (int i = 0; i < n1->n_stacks; i++) {

            if (n1->block[i].size() == nodeList_element->block[i].size()) {
                for (int j = 0; j < n1->block[i].size(); j++) {
                    if (n1->block[i][j] != nodeList_element->block[i][j])
                        exists = false;

                }
            }
            else
                exists = false;

            //by the end of this loop the exists is false if the node has even one mismatching block

        }

        if (exists)
            return p;

    }

    return -1; //Not found
}


