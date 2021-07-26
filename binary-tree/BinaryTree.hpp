#pragma once
#include "BinTreeNode.hpp"
#include <iostream>
#define MAX(a, b) a > b ? a : b
#define a 5
template <typename T> class BinaryTree : BinTreeNode<T> {
public:
    BinTreeNode<T> *root;
    BinaryTree();
    BinaryTree(T);
    ~BinaryTree();
    void insert(T);
    void show();
    void remove(T);
    int height();
private:
    int _height(BinTreeNode<T> *);
    BinTreeNode<T>* _remove(T, BinTreeNode<T> *);
    BinTreeNode<T>* _min_node(BinTreeNode<T> *);
    void _delete_tree(BinTreeNode<T> *);
    void _insert(T, BinTreeNode<T> *);  
    void _show(BinTreeNode<T> *);
};