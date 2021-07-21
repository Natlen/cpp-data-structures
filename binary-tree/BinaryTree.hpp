#pragma once
#include "BinTreeNode.hpp"
template <typename T> class BinaryTree : BinTreeNode<T> {
    public:
    BinTreeNode<T> *root;
    BinaryTree();
    BinaryTree(T);
};