#include <iostream>
using namespace std;
void linearSearch(int data[], int n) {
    int item;
    cout << "Enter Item Number: "<< endl;
    cin >> item;
    int index = 0;
    bool found = false;
    for (int i = 0; i< n; i++) {
        if (item == data[i]) {
            found = true;
            index = i ;
            break;
        }
    }
    if (found == true) {
        cout << "Found the index at:" << index << endl;
    }
    else {
        cout << "Item not found" << endl;
    }
}
int main() {
    int data[10];
    int n = 10;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    linearSearch(data ,10);
        cout << endl;
     return 0;
}