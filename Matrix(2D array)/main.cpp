#include <iostream>
using namespace std;
int main() {
    int row1, col1;
    cout << "Enter row size: ";
    cin >> row1;
    cout << "Enter col size: ";
    cin >> col1;
    int data[10][10];
    cout << "Enter data1:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> data[i][j];
        }
    }
    int row2, col2;
    cout << "Enter row size: ";
    cin >> row2;
    cout << "Enter col size: ";
    cin >> col2;
    int data1[10][10];
    cout << "Enter data2:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> data1[i][j];
        }
    }
    // Addition algo .....
    if (row1 == row2 && col1 == col2) {
        cout << "\nAddition:\n";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                cout << data[i][j] + data1[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Addition is not possible!\n";
    }
    // Subtraction algo .......
    if (row1 == row2 && col1 == col2) {
        cout << "\nSubtraction:\n";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                cout << data[i][j] - data1[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Subtraction is not possible!\n";
    }
    // Multiplication algo .....
    if (col1 == row2) {
        int multiplication[10][10];
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                int sum = 0;
                for (int k = 0; k < col1; k++) {
                    sum += data[i][k] * data1[k][j];
                }
                multiplication[i][j] = sum;
            }
        }
        cout << "\nMultiplication:\n";
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                cout << multiplication[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Multiplication is not possible!\n";
    }
    // Transpose of matrix 1
    cout << "\nTranspose of matrix-1:\n";
    for (int i = 0; i < col1; i++) {
        for (int j = 0; j < row1; j++) {
            cout << data[j][i] << " ";
        }
        cout << "\n";
    }
    // Transpose of matrix 2
    cout << "\nTranspose of matrix-2:\n";
    for (int i = 0; i < col2; i++) {
        for (int j = 0; j < row2; j++) {
            cout << data1[j][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
