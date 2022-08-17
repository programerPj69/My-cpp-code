// find reminder c++ program
#include<iostream>
using namespace std;

int main()
{
    int divident , divisor ,reminder;

    cout<<"Enter divident::";
    cin>>divident;
    cout<<"Enter divisor::";
    cin>>divisor;
    
    float qeionter=divident/divisor;
    reminder=divident%divisor;

    cout<<"\n qeionter is=" <<qeionter<<"\n reminder is::"<<reminder<<endl;
}