#include "single-node/SingleNode.hpp"
#include "single-node/SingleNode.cpp"
#include "dual-node/DualNode.hpp"
#include "dual-node/DualNode.cpp"
#include "Stack/Stack.hpp"
#include "Stack/Stack.cpp"

#include "binary-tree/BinTreeNode.hpp"
#include "binary-tree/BinTreeNode.cpp"
#include "binary-tree/BinaryTree.hpp"
#include "binary-tree/BinaryTree.cpp"
#include <iostream>

using namespace std;

int main() {
    /*  STACK  */
        // Stack<int> s;
        // try { 
        //     s.pop(); 
        // }
        // catch(const char *err_msg) {
        //     cerr << err_msg << endl;
        // }
        // s.push(1);
        // s.push(2);
        // s.push(3);
        // s.push(4);
        // cout << s.pop(7) << endl;
        // cout << s.pop() << endl;
        // cout << s.pop() << endl;
        // cout << s.pop() << endl;
    /*  BinaryTree   */
    BinaryTree<int> t = BinaryTree<int>(10);
    //left
    t.insert(5);
    t.insert(4);
    t.insert(6);
    t.insert(2);
    t.insert(7);
    t.insert(1);
    t.insert(3);
    //right
    t.insert(15);
    t.insert(11);
    t.insert(20);
    t.insert(21);
    t.insert(17);
    t.insert(19);
    t.insert(18);
    t.show();
    t.remove(19);
    t.show();
    system("PAUSE");    // debugging purposes.
    return 0;
}