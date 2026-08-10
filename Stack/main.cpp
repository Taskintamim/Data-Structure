#include <iostream>
using namespace std;
#include "Stack.h"

int main() {
    Stack* stack = new Stack();
    stack->push(10);
    stack->push(20);
    stack->push(30);
    stack->push(40);
    stack->push(50);
    stack->push(60);
    stack->push(70);
    stack ->printStack();
    stack->pop();
    stack->printStack();
    int  x = stack -> peek();
    cout << x << endl;

}
