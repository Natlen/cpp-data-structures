#include "Stack.hpp"
template <typename T> Stack<T>::Stack() : top(nullptr) {}
template <typename T> Stack<T>::Stack(T _data) : top(new SingleNode<T>(_data)) {}
template <typename T> bool Stack<T>::isEmpty() { return !top; }
template <typename T> T Stack<T>::peek() { return top->data; }
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
template <typename T> T Stack<T>::pop(int index) {
    
    T ret_data;
    
    if(isEmpty())
        throw " ** EXCEPTION ** Stack::pop() >> cannot pop | stack is already empty.";
    SingleNode<T> *temp = top;
    if(!index)
        top = top->next;
    else if(top->next)
    {
        SingleNode<T> *prev = top, *next = top->next;
        while(--index && next->next)    // reaching current index at stack && the upcoming next field is not empty.
        {
            prev = next;
            next = next->next;
        }
        temp = next;
        prev->next = temp->next;     
    }
    ret_data = temp->data;
    delete temp;
    return ret_data;
}