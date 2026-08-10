#include <iostream>
using namespace std;
void binarySearch(int data[], int n) {
    int item;
    cout << "Enter Item Number :" << endl;
    cin >> item;
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;
    bool found = false;
    int location = 0;
    while (low <= high) {
        mid = (low + high)/2;
        if (item < data[mid]) {
            high = mid -1;
        }
        else if (item > data[mid]) {
            low = mid+1;
        }
        else {
            found = true;
            location = mid;
            break;
        }
    }
    if (found == true) {
        cout << "Found at Index:" << location << endl;
    }
    else {
        cout << "Not Found." << endl;
    }
}
int main() {
    int data[10];
    int n = 10;
    cout << "Enter 10 numbers:" << endl;
    for(int i=0; i < n; i++) {
        cin >> data[i];
    }
    binarySearch(data, 10);
    cout << endl;
    return 0;
}