#include<iostream>
using namespace std;

int main()
{
    int val=105;
    int *ptr;

    ptr=&val;
    cout<<"value of val is : "<<val<<endl;
    cout<<"value of ptr is :"<<ptr<<endl;
    cout<<"value of specific ptr is: "<<*ptr<<endl;

    return 0;
}