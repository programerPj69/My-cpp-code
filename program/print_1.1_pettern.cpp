/*
c++ program for print rect angle 
12345
12345
12345
12345
*/

#include<iostream>
using namespace std;

int main()
{
    int row , col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            for (int n=1;n<=5;n++)
            {
                cout<<n;
            }
            cout<<endl;
        }
    }
    return 0;
}