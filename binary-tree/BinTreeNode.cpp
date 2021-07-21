#include "BinTreeNode.hpp"
template <typename T> BinTreeNode<T>::BinTreeNode() : data(0), left(nullptr), right(nullptr) { }
template <typename T> BinTreeNode<T>::BinTreeNode(T _data) : data(_data), left(nullptr), right(nullptr) { }