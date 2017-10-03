//
// Created by jrv on 9/22/17.
//

#ifndef FIRSTPROJECT_NODE_H
#define FIRSTPROJECT_NODE_H

#include <vector>
#include <random>
#include <iostream>
#include <time.h>

using namespace std;

class Node
{
public:

    Node(int s, int b);
    void PrintNode();
    void RandomPuzzle( int n_moves , bool beVerbose = false);
    bool IsGoal();
    void ClearNode();

    vector< vector<char> > block;
    Node* parent;
    float g, h,f;
    int n_stacks;
    int n_blocks;
    bool visited;



};

#endif //FIRSTPROJECT_NODE_H
