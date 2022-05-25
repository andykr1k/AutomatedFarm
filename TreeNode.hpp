#include <vector>
#include <cstring>
#include <iostream>
#include "Plants.hpp"
#include "Node.hpp"
using namespace std;

class TreeNode {
public:
    //Constructor
    TreeNode( Node *nNode );

    //Getters
    Node *node(){ return makeNode; };
    TreeNode *left() { return leftSubtree; }
    TreeNode *right() { return rightSubtree; }

    //Setters
    void left( TreeNode *leftPtr ) { leftSubtree = leftPtr; }
    void right( TreeNode *rightPtr ) { rightSubtree = rightPtr; };

    //Functions
    void print(){ makeNode->print(); }

private:
    Node *makeNode;
    TreeNode *leftSubtree, *rightSubtree;
};