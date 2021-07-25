#include "BinaryTree.hpp"
template <typename T> BinaryTree<T>::BinaryTree() : root(nullptr) { }
template <typename T> BinaryTree<T>::BinaryTree(T _data) : root(new BinTreeNode<T>(_data)) { }
template <typename T> BinaryTree<T>::~BinaryTree() {
    delete_tree(this->root);
    this->root = nullptr;
}
template <typename T> void BinaryTree<T>::delete_tree(BinTreeNode<T> *t) {
    if(t == nullptr)
        return;
    delete_tree(t->left);
    delete_tree(t->right);
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
template <typename T> void BinaryTree<T>::_show(BinTreeNode<T> *t) {
    if(t == nullptr)
        return;
    _show(t->left);
    std::cout << t->data << " ";
    _show(t->right);
}