#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two number ";
    cin>>a,b;

    a=a+b;
    b=b-a;
    a=a-b;
    cout<<"after swip the number is"<<endl;
    cout<<"a="<<a<<"b="<<b;

    return 0;

}