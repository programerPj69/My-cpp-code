// genrate rendom numer using for loop 
#include<iostream>
using namespace std;

int main()
{
    int i, num;

    cout<<"Genrate rendom number:::"<<endl;
    for(i=0;i<=10;i++)
    {
        num=rand()%100;
        cout<<"number is ::"<<num<<endl;

    }
    cout<<"\n";

    return 0;

}