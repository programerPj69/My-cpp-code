// making calculator using switch or break case  
#include<iostream>
using namespace std;

int main()
{
    char op;
    float num1,num2;
    cin>>num1>>num2;
    cout<<"enter your op: +,-,*,/";
    cin>>op;

    switch(op)
    {
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
        cout<<"operator not found ERROR";
        break;


    }
    return 0;
    
}