#include "BinaryTree.hpp"
template <typename T> BinaryTree<T>::BinaryTree() : root(nullptr) { }
template <typename T> BinaryTree<T>::BinaryTree(T _data) : root(new BinTreeNode<T>(_data)) { }
template <typename T> BinaryTree<T>::~BinaryTree() {
    _delete_tree(this->root);
    this->root = nullptr;
}
template <typename T> void BinaryTree<T>::_delete_tree(BinTreeNode<T> *t) {
    if(t == nullptr)
        return;
    _delete_tree(t->left);
    _delete_tree(t->right);
    delete t;
    t = nullptr;
}
template <typename T> void BinaryTree<T>::insert(T _data) {
    _insert(_data, this->root);
}
template <typename T> void BinaryTree<T>::_insert(T _data, BinTreeNode<T> *t) {
    if(t == nullptr)
        return;
    if(_data <= t->data)
        if(t->left != nullptr)
            _insert(_data, t->left);
        else
            t->left= new BinTreeNode<T>(_data);
    else if(t->right != nullptr)
            _insert(_data, t->right);
        else
            t->right = new BinTreeNode<T>(_data);
}
template <typename T> void BinaryTree<T>::show() {
    _show(this->root);
    std:: cout << std::endl;
}
template <typename T> int BinaryTree<T>::height() {
    return _height(this->root);
}
template <typename T> int BinaryTree<T>::_height(BinTreeNode<T> *t) {
    if(t == nullptr)
        return 0;
    return MAX(1 + _height(t->left), 1 + _height(t->right));
}
template <typename T> void BinaryTree<T>::_show(BinTreeNode<T> *t) {
    if(t == nullptr)
        return;
    _show(t->left);
    std::cout << t->data << " ";
    _show(t->right);
}
template <typename T> void BinaryTree<T>::remove(T _data) {
    _remove(_data, this->root);
}
template <typename T> BinTreeNode<T>* BinaryTree<T>::_min_node(BinTreeNode<T> *t) {
    if(t == nullptr)
        return nullptr;
    if(t->left == nullptr)
        return t;
    return _min_node(t->left);
}
template <typename T> BinTreeNode<T>* BinaryTree<T>::_remove(T _data, BinTreeNode<T> *t) {
    if(t == nullptr)
        return nullptr;
    if(_data < t->data) 
        t->left = _remove(_data, t->left);
    else if( _data > t->data)
        t->right = _remove(_data, t->right);
    else
    {
        // case 1 - node is a leaf.
        if(t->left == nullptr && t->right == nullptr)
           { delete t;  t = nullptr; return t; }
        //case 2 - node has one child - either left or right
        else if(t->left == nullptr || t->right == nullptr)
        {
            BinTreeNode<T> *temp = t->left ? t->left : t->right;
            delete t;
            t = temp;
        }
        //case 3 - node has two childs
        else
        {
            BinTreeNode<T> *temp = _min_node(t->right);
            t->data = temp->data;
            t->right = _remove(temp->data, t->right);
        }
    }
    return t;
}







