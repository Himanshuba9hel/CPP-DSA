#ifndef TREEOPS_H
#define TREEOPS_H

#include <cstdarg>
#include "node.h"
#include <iostream>

enum position {
    left,
    right
};
class TreeOps
{
public:
    TreeOps();
    TreeOps(node s_node);
    void create();
    //void insert(int val, position pos = position::left);
    void insert(int val, position pos...);
    void remove();


/*              Required Nodes              */
private:
    node* rootNode    = nullptr;
    node* parentNode  = nullptr;
    node* currentNode = nullptr;
};

#endif // TREEOPS_H
