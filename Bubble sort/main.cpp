#include <iostream>
#include "Sort.h"
using namespace std;
int main() {
    int data[10] = {4,1,7,23,54,65,76,24,32,98};
    int n = 10 ;
    Sort* bublleSort = new Sort();
    bublleSort->bubbleSort(data, 10);
    for (int i = 0; i < n; i++) {
        cout << data[i] << endl;
    }
    return 0;
}
