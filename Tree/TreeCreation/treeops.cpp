#include "treeops.h"

TreeOps::TreeOps() {
    node* newNode = new node(0);
    rootNode    = newNode;
    parentNode  = newNode;
    currentNode = newNode;
}

TreeOps::TreeOps(node s_node)
{

}

void TreeOps::insert(int val, position pos...)
{
    node* newNode = new node(0);
    std::va_list args;
    va_start(args,pos);
    for(int i = 0; i < pos; ++i){

    }
}

// void TreeOps::insert(int val, position pos)
// {
//     node* newNode = new node(0);
//     switch(pos){
//     case position::left:
//         currentNode->left = newNode;
//         break;
//     case position::right:
//         currentNode->right = newNode;
//         break;
//     }
//     parentNode = currentNode;
//     currentNode = newNode;
// }
// void insert(int val, position pos...){
//     node* newNode = new node(0);
//     std::va_list args;
//     va_start(args,pos);
//     for(auto i = va_start()){

//     }
// }
void TreeOps::remove()
{
    delete currentNode;
    currentNode = parentNode;
}
