#include <iostream>
using namespace std;
#include "Recursion.h"
int main() {
    Recursion recn;
    int n;
    int item;
    string word;

    cout << "Enter a number : ";
    cin >> n;
    cout << "Factorial of " << n << " is " << recn.factorial(n) << endl;
    cout << "Enter a index : ";
    cin >> item;
    cout <<"Fibonacci number of the index " << item <<  " is " << recn.fibonacci(item) << endl;
    cout << endl;
    cout << "Number 1 to 100 in reverse order : " << endl;
    recn.countReverse(100);
    cout << endl;
    cout << "Printing JAVA 100 times : " << endl;
    recn.printJava(100);
    cout << endl;
    cout << "Enter a word : " << endl;
    cin >> word;
    if (recn.isPalindrome(word)) {
        cout << word << " is a Palindrome " << endl;
    }
    else {
        cout << word << " is not a Palindrome " << endl;
    }

}
