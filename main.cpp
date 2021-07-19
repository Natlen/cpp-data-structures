#include "single-node/SingleNode.hpp"
#include "single-node/SingleNode.cpp"
#include "dual-node/DualNode.hpp"
#include "dual-node/DualNode.cpp"
#include "Stack/Stack.hpp"
#include "Stack/Stack.cpp"

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
    /*  QUEUE   */
    DualNode<int> dn(5);
    system("PAUSE");    // debugging purposes.
    return 0;
}