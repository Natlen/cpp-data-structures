#include "DualNode.hpp"
template <typename T> DualNode<T>::DualNode() : prev(nullptr) {}
template <typename T> DualNode<T>::DualNode(T _data) : SingleNode<T>::SingleNode(_data), prev(nullptr) {}