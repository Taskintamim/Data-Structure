//
// Created by Taskin Billah Tamim on 9/7/26.
//

#ifndef SINGLE_LINKEDLIST__SLL_H
#define SINGLE_LINKEDLIST__SLL_H
#include <iostream>
#include "Node.h"
using namespace std;

class SLL {
     public:
    Node* start;

    SLL() {
        start = nullptr;
    }

    Node* getNode() {
        Node* newNode = new Node();
        cout << "\n Enter Data: ";
        cin >> newNode->data;
        newNode->next = nullptr;
        return newNode;
    }

    void printList() {
        Node* temp = start;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
    int nodeCounter() {
        int count = 1;
        Node* temp = start;
        while (temp->next != nullptr) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    void insertFirst() {
        Node* newNode = getNode();
        if (start == nullptr) {
            start = newNode;
        } else {
            newNode->next = start;
            start = newNode; 
        }
    }

    void insertMiddle() {
        Node* newNode = getNode();
        if (start == nullptr) {
            start = newNode;
        } else {
            cout << "Enter Position:";
            int position;
            cin >> position;

            if (position > 1 && position <= nodeCounter()) {
                int ctr = 1;
                Node* temp = start;

                while (ctr < position - 1) {
                    temp = temp->next;
                    ctr++;
                }

                newNode->next = temp->next;
                temp->next = newNode;
            } else {
                cout << "Invalid Position";
            }
        }
    }

    void insertLast() {
        Node* newNode = getNode();
        if (start == nullptr) {
            start = newNode;
        } else {
            Node* temp = start;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteFirst() {
        if (start == nullptr) {
            cout << "List is Empty";
        } else {
            start = start->next;
        }
    }

    void deleteMiddle() {
        if (start == nullptr) {
            cout << "Empty List";
        } else {
            cout << "Enter Position you want to delete:";
            int position;
            cin >> position;
            int ctr;

            if (position > 1 && position <= nodeCounter()) {
                ctr = 1;
                Node* temp = start;
                while (ctr < position - 1) {
                    temp = temp->next;
                    ctr++;
                }
                temp->next = temp->next->next;
            }
        }
    }

    void deleteLast() {
        if (start == nullptr) {
            cout << "Empty List";
        } else {
            Node* temp = start;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            temp->next = nullptr;
        }
    }
};


#endif //SINGLE_LINKEDLIST__SLL_H
