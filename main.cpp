
//---------------------------------------CSE 625 Artificial Intelligence Project 1 -------------------------------------
//
//    Author : Jibin Rajan Varghese
//    UIN    : 725002873
//
//----------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <iterator>
#include <climits>
#include <list>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <string>
#include <math.h>
#include <time.h>
#include <map>

#include "Node.h"
#include "Tree.h"
#include "AStar.h"


vector<Node*> nodeList;

int main() {
    std::cout << "Hello, World!" << std::endl;

    int n_blocks, n_stacks;

    cout<<"Number of Blocks : ";
    //cin>>n_blocks;
    cout<<"Number of Stacks : ";
    //cin>>n_stacks;


    vector<vector<char> > block;
    vector<char> stack;

    ///////////////////////////////////////////////////////////////////////
//
//    vector<vector<char> > block;
//    vector<char> stack;
//
//
//    //Create a world of 5 blocks on 3 stacks
//
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

    ///////////////////////////////////////////////////////////////////////

    //Create a world of 5 blocks on 3 stacks
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



    ///////////////////////////////////////////////////////////////////////

    //Create a world of 5 blocks on 3 stacks

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

*/

/*

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
    /////////////////////////////////////////////////////////////////////



    n_blocks = 10;
    n_stacks = 5;

    Node *start = new Node( n_blocks, n_stacks );
    start->block = block;

   start->RandomPuzzle(500);

    start->PrintNode();

    start->visited = true;

    Tree SearchTree;

    vector<Node*> Successors;
    Successors = SearchTree.GenerateSuccessors(start);

    for(int i = 0; i <nodeList.size(); i++)
    {
        Node *n = nodeList[i];
        n->PrintNode();
    }

    cout<<endl;

    //-----------------------------------------
    //
    //  Node *test = new Node( n_blocks, n_stacks );
    //  test->RandomPuzzle(15);
    //  int p = SearchTree.Exists(test);
    //  cout<<"node exists at "<<p<<" ";
    //
    //----------------------------------------

    AStar Searcher;
    Searcher.AStarSearch(start,8);


    return 0;


}
