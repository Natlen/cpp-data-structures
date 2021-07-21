#pragma once
template <typename T> class BinTreeNode {
    public:
    T data;
    BinTreeNode<T> *left, *right;
    BinTreeNode();
    BinTreeNode(T);
};