// pointer Examole
#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int *ptrA=&a;
   int *ptrB=&b;
  cout<<"Enter the val of a  (number)"<<endl;
  cin>>a;
cout<<"Enter the val of b  (number)"<<endl;
  cin>>b;
  

  cout<<"value of a is:: "<<a<<endl;
  cout<<"Value of b is:: "<<b<<endl;
  cout<<"value of *ptrA is :: "<<*ptrA<<endl;
  cout<<"value of ptrA is :: "<<ptrA<<endl;
  cout<<"value of *ptrB is :: "<<*ptrB<<endl;
   cout<<"value of ptrA is :: "<<ptrB<<endl;

  return 0;

}