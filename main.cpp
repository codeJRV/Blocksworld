
//---------------------------------------CSE 625 Artificial Intelligence Project 1 -------------------------------------
//
//    Author : Jibin Rajan Varghese
//    UIN    : 725002873
//
//----------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iterator>
#include <list>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>

#include "Node.h"
#include "Tree.h"
#include "AStar.h"

using namespace std;

vector<Node*> nodeList;

int main(int argc, char** argv) {

    cout << "Blocks World!" << std::endl;

    int n_blocks = 0;
    int n_stacks = 0;


    vector<vector<char> > block;
    vector<char> stack;

    if(argc != 3)
    {

        int heuristic = 0;

        cout << "Number of Blocks : ";
        cin>>n_blocks;
        cout << "Number of Stacks : ";
        cin>>n_stacks;
        cout << "Heuristic (0/1)  : ";
        cin>>heuristic;

        if(n_stacks == 1 || n_blocks == 0)
        {
            cout<<"Impossible to solve this problem ( try giving more stacks or blocks ) ";
            return 0;

        }

        cout<<"\nGenerating a random puzzle of "<<n_blocks<<" on "<<n_stacks<<" stacks\n";
        Node *start = new Node( n_blocks, n_stacks );
        start->block = block;
        start->RandomPuzzle(500);

        AStar Searcher;

        if(heuristic==1)
        Searcher.AStarSearch(start,1);
        else
        Searcher.AStarSearch(start,0);

    }
    else
    {

        const std::string heuristic = argv[1];

        const std::string blocksworld = argv[2];

        int i = 0;
        while (blocksworld[i])
        {

            if(blocksworld[i] != '.')
            {
                stack.push_back(blocksworld[i]);
                n_blocks++;
            }

            else
            {
                n_stacks++;
                block.push_back(stack);
                stack.clear();
            }

            i++;

        }

        Node *start = new Node( n_blocks, n_stacks );
        start->block = block;

        if(!start->IsProper())
        {
            cout<<" Incorrect input configuration, the problem cannot be solved";
            return 0;
        }

        AStar Searcher;

        if(heuristic == "1")
            Searcher.AStarSearch(start,1);
        else
            Searcher.AStarSearch(start,0);
    }


////////// SOME SAMPLE CASES FOR TESTING WERE USED AS FOLLOWS
/*
  stack.push_back('B');
  block.push_back(stack);
  stack.clear();

    stack.push_back('C');
    stack.push_back('E');
    block.push_back(stack);
    stack.clear();

    stack.push_back('A');
    stack.push_back('D');
    block.push_back(stack);


    n_blocks = 5;
    n_stacks = 3;

*/

/////////////////////////////////////////////////////////////////////
/*
    n_blocks = 10;
    n_stacks = 5;

    stack.push_back('F');
    stack.push_back('H');
    stack.push_back('D');
    stack.push_back('A');
    stack.push_back('G');
    block.push_back(stack);
    stack.clear();

    stack.push_back('I');
    block.push_back(stack);
    stack.clear();

    block.push_back(stack);
    stack.clear();

    stack.push_back('C');
    stack.push_back('B');
    block.push_back(stack);
    stack.clear();

    stack.push_back('J');
    stack.push_back('E');
    block.push_back(stack);
    stack.clear();

    */

 /////////////////////////////////////////////////////////////////////
 /*   n_blocks = 10;
    n_stacks = 3;

    stack.push_back('F');
    stack.push_back('H');
    stack.push_back('D');
    stack.push_back('A');
    stack.push_back('G');
    block.push_back(stack);
    stack.clear();

    stack.push_back('I');
    block.push_back(stack);
    stack.clear();

    stack.push_back('C');
    stack.push_back('B');
    stack.push_back('J');
    stack.push_back('E');
    block.push_back(stack);
    stack.clear();

*/

/*
    ===== ( 20 blocks on 5 stacks ) =====
    0 | H S D F Q I L
    1 | N O E J K A
    2 | R B P G T
    3 |
    4 | M C

    stack.push_back('H');
    stack.push_back('S');
    stack.push_back('D');
    stack.push_back('F');
    stack.push_back('Q');
    stack.push_back('I');
    stack.push_back('L');
    block.push_back(stack);
    stack.clear();

    stack.push_back('N');
    stack.push_back('O');
    stack.push_back('E');
    stack.push_back('J');
    stack.push_back('K');
    stack.push_back('A');
    block.push_back(stack);
    stack.clear();

    stack.push_back('R');
    stack.push_back('B');
    stack.push_back('P');
    stack.push_back('G');
    stack.push_back('T');
    block.push_back(stack);
    stack.clear();


    block.push_back(stack);
    stack.clear();

    stack.push_back('M');
    stack.push_back('C');
    block.push_back(stack);
    stack.clear();
    */

    ////////////////////////////////////////////////////////////////////
    return 0;


}
