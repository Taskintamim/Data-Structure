#include <iostream>
using namespace std;
#include "CircularQueue.h"
#include"LinearQueue.h"
int main() {
    LinearQueue* linQ = new LinearQueue();
    CircularQueue* cQ = new CircularQueue();
    for (int i = 0; i < 5; i++) {
        int x;
        cout << "Enter an integer " << i+1 << ": " ;
        cin >> x;
        linQ->enqueue(x);
    }
    cout << "Linear Queue :" << endl;
    linQ->printList();
    cout << "After DeQueue:" << endl;
    linQ->dequeue();
    linQ->printList();
    cout << endl;
    cout << endl;

    cout << "Circular Queue :" << endl;
    for (int i = 0; i < 5; i++) {
        int x;
        cout << "Enter an integer " << i+1 << ": " ;
        cin >> x;
        cQ->Cenqueue(x);
    }

    cout << "Circular Queue :" << endl;
    cQ->printList();
    cout << "After Circular DeQueue:" << endl;
    cQ->Cdequeue();
    cQ->printList();
    return 0;
}