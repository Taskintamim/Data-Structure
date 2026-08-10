//
// Created by Taskin Billah Tamim on 3/7/26.
//

#ifndef STACK_ALGEBRIC_EXPRESSION__INFIXCONVERSION_H
#define STACK_ALGEBRIC_EXPRESSION__INFIXCONVERSION_H
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class InfixConversion {
    public:
    stack <char> st;
    string expression;
    string result;

    InfixConversion(string expression){
        this->expression = expression;
        this->result = "";
    }

    string getResult(){
        return result;
    }

    int precedence(char ch){
        if (ch == '+' || ch == '-') {
            return 1;
        }
        else if (ch == '*' || ch == '/')
            return 2;
        else if (ch == '^')
            return 3;
        else
            return -1;
    }

    void printStack(){
        cout << "[";
        stack<char> temp = st;

        while (!temp.empty())
        {
            cout << temp.top();
            temp.pop();
        }

        cout << "]" << endl;
    }

    void infixToPostfix(){
        cout << "SYMBOL\tRESULT\tSTACK" << endl;
        for (int i = 0; i < expression.length(); i++){
            char ch = expression[i];
            if (ch == ' ')
                continue;

            if (ch == '(')
            {
                st.push(ch);
            }
            else if (isalnum(ch))
            {
                result += ch;
            }
            else if (ch == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                if (!st.empty() && st.top()=='(') {
                    st.pop();
                }
            }
            else {

                if (st.empty() || st.top() == '(') {
                    st.push(ch);
                }
                else if (precedence(ch) > precedence(st.top())) {
                    st.push(ch);
                }
                else {

                    while (!st.empty() && precedence(ch) <= precedence(st.top()) && st.top() != '(') {
                        result+=st.top();
                        st.pop();
                    }
                    st.push(ch);
                }
            }
            cout << ch << "\t";
            cout << result << "\t";
            printStack();
        }

        while (!st.empty()) {
            result+=st.top();
            st.pop();
        }
        cout<<result<<"\t";
    }


};


#endif //STACK_ALGEBRIC_EXPRESSION__INFIXCONVERSION_H
