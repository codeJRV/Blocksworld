
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



    /////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////

    //Create a world of 5 blocks on 3 stacks
/*
    n_blocks = 10;
    n_stacks = 5;

    stack.push_back('A');
    stack.push_back('D');
    stack.push_back('G');
    block.push_back(stack);
    stack.clear();

    stack.push_back('I');
    block.push_back(stack);
    stack.clear();

    block.push_back(stack);
    stack.clear();

    stack.push_back('F');
    stack.push_back('H');
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

    Node *start = new Node( n_blocks, n_stacks );
    start->block = block;

    //start->RandomPuzzle(95);

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
    //-----------------------------------------

    AStar Searcher;
    Searcher.AStarSearch(start,6);


    return 0;


}
