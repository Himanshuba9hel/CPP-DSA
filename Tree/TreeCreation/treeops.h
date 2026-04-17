#ifndef TREEOPS_H
#define TREEOPS_H

#include "node.h"

class TreeOps
{
public:
    TreeOps();
    TreeOps(node s_node);
    void create();

/*              Required Nodes              */
private:
    node* rootNode    = nullptr;
    node* currentNode = nullptr;
};

#endif // TREEOPS_H
