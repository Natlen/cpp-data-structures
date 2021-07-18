#include "single-node/SingleNode.hpp"
#include "single-node/SingleNode.cpp"
#include "Stack/Stack.hpp"
#include "Stack/Stack.cpp"

#include <iostream>

using namespace std;

int main() {
    Stack<int> s1;
    try { 
        s1.pop(); 
    }
    catch(const char *err_msg) {
        cerr << err_msg << endl;
    }
    Stack<int> s(1);
    s.push(2);
    s.push(3);

    
    system("PAUSE"); // debugging purposes.
    return 0;
}