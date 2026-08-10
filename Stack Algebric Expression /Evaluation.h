//
// Created by Taskin Billah Tamim on 3/7/26.
//

#ifndef STACK_ALGEBRIC_EXPRESSION__EVALUATION_H
#define STACK_ALGEBRIC_EXPRESSION__EVALUATION_H
#include <stack>
#include <string>
#include <cmath>
using namespace std;

class Evaluation {
    public:
    stack<int> st;
    string expression;
    Evaluation(string expression){
        this->expression = expression;
    }
    void printStack(){
        stack<int> temp = st;

        while (!temp.empty())
        {
            cout << temp.top() << " ";
            temp.pop();
        }

        cout << endl;
    }
    int evaluate(){
        for (int i = 0; i < expression.length(); i++){
            char ch = expression[i];
            if (isdigit(ch)){
                st.push(ch - 48);
            }
            else if (ch == ' '){
                continue;
            }
            else{
                if (ch == '+'){
                    int operand2 = st.top();
                    st.pop();

                    int operand1 = st.top();
                    st.pop();

                    st.push(operand1 + operand2);
                }
                else if (ch == '-'){
                    int operand2 = st.top();
                    st.pop();

                    int operand1 = st.top();
                    st.pop();

                    st.push(operand1 - operand2);
                }
                else if (ch == '*'){
                    int operand2 = st.top();
                    st.pop();

                    int operand1 = st.top();
                    st.pop();

                    st.push(operand1 * operand2);
                }
                else if (ch == '/'){
                    int operand2 = st.top();
                    st.pop();

                    int operand1 = st.top();
                    st.pop();

                    st.push(operand1 / operand2);
                }
                else if (ch == '^'){
                    int operand2 = st.top();
                    st.pop();

                    int operand1 = st.top();
                    st.pop();

                    st.push(pow(operand1, operand2));
                }
            }

            cout << ch << "\t";
            printStack();
        }

        return st.top();
    }

};


#endif //STACK_ALGEBRIC_EXPRESSION__EVALUATION_H
