#include <iostream>
#include <string>
#include <stack>
#include "Evaluation.h"
#include "InfixConversion.h"
using namespace std;
int main() {
    string expression = "A+(B*C-(D/E^F)*G)*H";
    string expression1 = "623+-382/+*2^3+";
    cout  << "\n Infix to Prefix Conversion : \n";
    InfixConversion* conv = new InfixConversion(expression);
    conv -> infixToPostfix();
    cout << "\n Evaluation:\n";
    Evaluation* pe = new Evaluation(expression1);
    cout << pe->evaluate();
    return 0;

}