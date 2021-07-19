#pragma once
#include "../single-node/SingleNode.hpp"
template <typename T> class Stack : SingleNode<T> {

    SingleNode<T> *top;
    
    public:
    Stack();
    Stack(T);
    bool isEmpty();
    T peek();
    void push(T);
    T pop(int index = 0);
};