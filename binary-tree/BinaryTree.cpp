#include "BinaryTree.hpp"
template <typename T> BinaryTree<T>::BinaryTree() : root(nullptr) { }
template <typename T> BinaryTree<T>::BinaryTree(T _data) : root(new BinTreeNode<T>(_data)) { }