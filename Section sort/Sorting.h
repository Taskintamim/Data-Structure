//
// Created by Taskin Billah Tamim on 20/6/26.
//

#ifndef SECTION_SORT_SORTING_H
#define SECTION_SORT_SORTING_H


class Sorting {
    public:
    static void selectionSort(int data[], int dataSize) {
        for (int j = 0; j < dataSize - 1; j++) {
            int mi = j;

            for (int i = mi + 1; i < dataSize ; i++) {
                if (data[i] < data[mi]) {
                    mi = i;
                }
            }
            int t = data[j];
            data[j] = data[mi];
            data[mi] = t;
        }

    }
};


#endif //SECTION_SORT_SORTING_H
