//
// Created by Taskin Billah Tamim on 20/7/26.
//

#ifndef RECURSIVE_FUNCTION_RECURSION_H
#define RECURSIVE_FUNCTION_RECURSION_H


class Recursion {
public:
    long factorial(int n) {
        if (n == 0) {
            return 1;
        }
        else {
            return n * factorial(n - 1);
        }
    }
    int fibonacci(int n) {
        if (n == 0) {
            return 0;
        }
        else if (n == 1) {
            return 1;
        }
        else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
    void countReverse(int n) {
        if (n > 0) {
            cout << n << " ";
            countReverse(n - 1);
        }
    }
    void printJava(int n) {
        if (n > 0) {
            cout << "JAVA" << " ";
            printJava(n - 1);
        }
    }

    bool isPalindrome(string s) {
        if (s.length() <= 1) {
            return true;
        }
        if (s[0] != s[s.length() - 1]) {
            return false;
        }
        return isPalindrome(s.substr(1, s.length() - 2));
    }

};


#endif //RECURSIVE_FUNCTION_RECURSION_H
