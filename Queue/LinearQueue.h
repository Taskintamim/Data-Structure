//
// Created by Taskin Billah Tamim on 9/7/26.
//

#ifndef QUEUE_LINEARQUEUE_H
#define QUEUE_LINEARQUEUE_H
#include <iostream>
using namespace std;
class LinearQueue {
    public:
        int F;
        int R;
        int data[5];
        LinearQueue() {
            F=0;
            R=0;
        }
        void enqueue(int item) {
            if (R == 5) {
                cout << "Queue is empty" << endl;
            }
            else {
                data[R] = item;
                R++;
            }
        }
        void dequeue() {
            if (F == R) {
                cout << "Queue is empty" << endl;
            }
            else {
                F++;
            }
        }
        void printList() {
            for (int i = F; i < R; i++) {
                cout << data[i] << endl;
            }
        }
};


#endif //QUEUE_LINEARQUEUE_H
