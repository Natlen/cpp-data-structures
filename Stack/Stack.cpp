#include "Stack.hpp"
template <typename T> Stack<T>::Stack() : top(nullptr) {}
template <typename T> Stack<T>::Stack(T _data) : top(new SingleNode<T>(_data)) {}
template <typename T> bool Stack<T>::isEmpty() { return !top; }
template <typename T> void Stack<T>::push(T _data) {
    SingleNode<T> *new_node = new SingleNode<T>(_data);
    if(isEmpty())
        top = new_node;
    else
    {
        SingleNode<T> *temp = top;
        top = new_node;
        top->next = temp;
    }
}
template <typename T> T Stack<T>::pop() {
    T ret_data;
    
    if(isEmpty())
        throw " ** EXCEPTION ** Stack::pop() >> cannot pop | stack is already empty.";
   
    else
    {
        SingleNode<T> *temp = top;
        top = top->next;
        ret_data = temp->data;
        delete temp;
    }
    return ret_data;
}