#include <iostream>
using namespace std;
#include "SLL.h"

int main() {
    SLL* sList = new SLL();

    cout << "INSERT FIRST\n";
    sList->insertFirst();
    cout << "After inserting first node:\n";
    sList->printList();

    sList->insertFirst();
    cout << "\nAfter inserting another at first:\n";
    sList->printList();

    sList->insertFirst();
    cout << "\nAfter inserting another at first:\n";
    sList->printList();


    cout << "\n\nDELETE FIRST\n";
    cout << "Before delete:\n";
    sList->printList();

    sList->deleteFirst();
    cout << "\nAfter delete first:\n";
    sList->printList();


    cout << "\n\nINSERT LAST\n";
    sList->insertLast();
    cout << "After inserting at last:\n";
    sList->printList();

    sList->insertLast();
    cout << "\nAfter inserting another at last:\n";
    sList->printList();


    cout << "\n\n DELETE LAST\n";
    cout << "Before delete last:\n";
    sList->printList();

    sList->deleteLast();
    cout << "\nAfter delete last:\n";
    sList->printList();


    cout << "\n\nINSERT MIDDLE\n";
    sList->insertMiddle();
    cout << "After inserting in middle:\n";
    sList->printList();

    sList->insertMiddle();
    cout << "\nAfter inserting another in middle:\n";
    sList->printList();


    cout << "\n\nDELETE MIDDLE\n";
    cout << "Before delete middle:\n";
    sList->printList();

    sList->deleteMiddle();
    cout << "\nAfter delete middle:\n";
    sList->printList();


    cout << "\n\nFINAL LIST\n";
    sList->printList();

    return 0;
}