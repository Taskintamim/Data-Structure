//
// Created by Taskin Billah Tamim on 28/6/26.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
#include <iostream>
using namespace std;
class Stack {
public:
    int top;
    int max = 10;
    int data[10];
    Stack() {
        top = 0;
    }
    void push(int item) {
        if (top == max) {
            cout << "Stack is full." <<endl;
        }
        else {
            data[top] = item;
            top++;
        }
    }
    int  pop() {
        if (top == 0) {
            cout << "Stack is empty." <<endl;
            return 0;
        }
        else {
            top--;
            return data[top];
        }
    }
    int peek() {
        if (top == 0) {
            cout << "Stack is empty." <<endl;
        }
        else {
            cout <<"peek Elements:" <<endl;
            return data[top-1];
        }
    }
    void printStack() {
        cout << "Stack is :" <<endl;
        for (int i = top-1; i >= 0; i--) {
            cout << data[i] << endl;
        }
    }
 int nodeCounter() {
        Node* temp = start;
        int count = 1;
        while (temp->next!= nullptr) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void deleteMidlle() {
        Node* newNode = getNode();
        if (start == nullptr) {
            cout << "Empty list";
        }
        else {
            cout<< "Enter position:";
            cin >> position;
            if (position>1 && position <= nodeCounter()) {
                ctr =1;
                Node* temp = start;
                while (ctr < position-1) {
                    temp = temp->next;
                    ctr++;
                }
                temp->next = temp->next->next;
            }
            else {
                cout << "Invalid Position.";
            }
        }
    }

};


#endif //STACK_STACK_H
