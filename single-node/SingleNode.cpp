#include "SingleNode.hpp"
template <typename T> SingleNode<T>::SingleNode() : data(0), next(nullptr) {}
template <typename T> SingleNode<T>::SingleNode(T _data) : data(_data), next(nullptr) {} 
