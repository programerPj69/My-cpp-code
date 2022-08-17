// using for loop find the sum of natural num

#include<iostream>
using namespace std;

int main()
{
    int sum=0,num;
    cout<<"Enter the number::  ";
    cin>>num;

    for(int i=0;i<=num;i++)
    {
        cout<<i<<" ";
        sum=sum+i;
        
    }
    cout<<"\n sum of natural number is "<<sum;
    return 0;

}