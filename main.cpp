#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout<<"Enter first number: ";
    cin >> num1;
    cout<<"Enter an operation, (+,-,*,/)";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;

    switch(op) {
        case '+':
            cout<<num1<<"+"<<num2<<"="<<num1+num2;
            break;
        case '-':
            cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case '/':
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
        default:
            cout<<"If operation is not (+,-,*,/), then you can't perform any calculations.";
            break;
    }

    return 0;
}
