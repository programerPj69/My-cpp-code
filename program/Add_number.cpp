//c++ program for making addd sub divi and multi
#include<iostream>
using namespace std;

int main()
{
    //for addtion 
    int a,b;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter secound number"<<endl;
    cin>>b;
    int sum=a+b;
    cout<<"sum of \n"<<a<<"+"<<b<<"="<<sum<<endl;
  
   //for subtraction
    int y,z;
    cout<<"enter first number "<<endl;
    cin>>y;
    cout<<"enter secound number"<<endl;
    cin>>z;
    int sub=y-z;
    cout<<"sub of \n"<<y<<"-"<<z<<"="<<sub<<endl;

    //for multiplication
    int first_num,sec_num;
    cout<<"first number="<<endl;
    cin>>first_num;
    cout<<"secound num="<<endl;
    cin>>sec_num;
    int multi=first_num*sec_num;
    cout<<"multiplaction of \n"<<first_num<<"*"<<sec_num<<"="<<multi<<endl;

    //for divisable

    int d=7;
    int r=22;
   float divide=r/d;
    cout<<"divide="<<divide;
    


    return 0;
}