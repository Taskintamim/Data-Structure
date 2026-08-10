//
// Created by Taskin Billah Tamim on 20/6/26.
//

#ifndef BUBBLE_SORT_SORT_H
#define BUBBLE_SORT_SORT_H


class Sort {
public:
    static void bubbleSort(int data[], int dataSize) {
        for (int j = 0; j < dataSize - 1; j++) {
            for (int i = 0; i < dataSize - 1 - j; i++) {
                if (data[i] > data[i + 1]) {
                    int t = data[i];
                    data[i] = data[i + 1];
                    data[i + 1] = t;
                }
            }
        }
    }
    //If number is sorted
    static void bubblesort2(int data[], int arraySize) {
        for (int j = 0; j < arraySize - 1; j++) {
            bool swap = true;
            for (int i = 0; i < arraySize - 1 - j; i++) {
                if (data[i] > data[i + 1]) {
                    int t = data[i];
                    data[i] = data[i + 1];
                    data[i + 1] = t;
                    swap = false;
                }
            }
            if (swap == true) break;

        }
    }
};


#endif //BUBBLE_SORT_SORT_H
