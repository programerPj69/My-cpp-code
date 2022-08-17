// memory managment Example for new and delete
#include<iostream>
using namespace std;

int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
    double avg;

    ptr1=new int;
    ptr2=new int;
    ptr3=new int;

    cout<<"Enter the first number : ";
    cin>>*ptr1;
    cout<<"Enter the secound number : ";
    cin>>*ptr2;
    cout<<"Enter the third number : ";
    cin>>*ptr3;
    avg=(*ptr1+*ptr2+*ptr3)/3;
    cout<<"The avrage is "<<avg<<endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}