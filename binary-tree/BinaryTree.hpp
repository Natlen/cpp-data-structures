#pragma once
#include "BinTreeNode.hpp"
#include <iostream>
template <typename T> class BinaryTree : BinTreeNode<T> {
public:
    BinTreeNode<T> *root;
    BinaryTree();
    BinaryTree(T);
    ~BinaryTree();
    void delete_tree(BinTreeNode<T> *);
    void insert(T);
    void show();
    
private:
    void _insert(T, BinTreeNode<T> *);  
    void _show(BinTreeNode<T> *);
};