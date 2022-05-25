#include<iostream>
#include<string>

#include "TreeNode.hpp"
#include "Node.hpp"

class Tree {
public:
    //Constructor
    Tree();

    //Getters
    TreeNode *getRoot() { return _root; }

    //Functions
    void insert( Node *nNode );
    Node *find( std::string name ){ return findHelper(name, getRoot()); }
    void print() { print(_root); }

private:
    Node *findHelper( std::string name, TreeNode *root);
    TreeNode *insert(TreeNode *tNode, Node *nNode);
    void print(TreeNode *root);

    TreeNode *_root;
};