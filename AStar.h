//
// Created by jrv on 9/23/17.
//

#ifndef FIRSTPROJECT_ASTAR_H
#define FIRSTPROJECT_ASTAR_H

#include "Node.h"
#include "Tree.h"
#include "Heirustic.h"
#include <queue>


class CompareFValue
{
public:
    bool operator()(Node* A, Node* B)
    { return ((A->f >= B->f));  }
};

class AStar {

public: bool AStarSearch(Node* start,int heuristic=1, int itr_max = 5000);
        void PrintPath (Node* n);
        priority_queue<Node*, vector<Node*>, CompareFValue > frontier;

};


#endif //FIRSTPROJECT_ASTAR_H
