#include <iostream>
#include "Sorting.h"
using namespace std;
int main() {
    int data[10] = {4, 7, 2, 23, 54, 12, 9, 0, 32, 72};
    int n =10;
    Sorting* sort = new Sorting();
    sort->selectionSort(data, 10);
    for (int i = 0; i < n; i++) {
        cout << data[i] << endl;
    }
    return 0;
}