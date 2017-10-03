//
// Created by jrv on 9/23/17.
//

#ifndef FIRSTPROJECT_TREE_H
#define FIRSTPROJECT_TREE_H

#include <vector>
#include <iostream>
#include "Node.h"

extern vector<Node *> nodeList;


class Tree {

public:
    vector<Node*> GenerateSuccessors( Node* start);
    int Exists(Node* n1);

};


#endif //FIRSTPROJECT_TREE_H
