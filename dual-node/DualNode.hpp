#pragma once
#include "../single-node/SingleNode.hpp"
template <typename T> class DualNode : SingleNode<T> {
    public:
    SingleNode<T> * prev;
    DualNode();
    DualNode(T);
};