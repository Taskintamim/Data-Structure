//
// Created by Taskin Billah Tamim on 9/7/26.
//

#ifndef QUEUE_CIRCULARQUEUE_H
#define QUEUE_CIRCULARQUEUE_H
#include <iostream>
using namespace std;

class CircularQueue {
public:
    int f;
    int r;
    int data[5];
    int count =0;
    CircularQueue() {
        f=0;
        r=0;
    }
    void Cenqueue(int item) {
        if (count == 5) {
            cout<<"\nCircular Queue is full"<<endl;
        }
        else {
            data[r] = item;
            r=(r+1)%5;
            count++;
        }
    }
    void Cdequeue() {
        if (count == 0) {
            cout<<"\nCircular Queue is empty"<<endl;
        }
        else {
            f = (f+1)%5;
            count--;
        }
    }
    void printList() {
        int dp = f;
        for (int i = 0; i < count; i++) {
            cout << data[dp] << " " << endl;
            dp = (dp+1)%5;
        }
    }

};


#endif //QUEUE_CIRCULARQUEUE_H
