#ifndef NODE_H
#define NODE_H

union Data{
    bool b;
    int  i;
    char c;
    float f;
    double d;
};

struct node
{
    int data = 0;
    // int   data;
    node* left  = nullptr;
    node* right = nullptr;
    node(){
        data  = 0;
        left  = nullptr;
        right = nullptr;
    }
    node(int _data){
        data  = _data;
        left  = nullptr;
        right = nullptr;
    }
    node(int _data,node* _left,node* _right) {
        data  = _data;
        left  = _left;
        right = _right;
    }
    node(const node &s_node) {
        data  = s_node.data;
        left  = s_node.left;
        right = s_node.right;
    }
};

#endif // NODE_H
