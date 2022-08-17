#include<iostream>
using namespace std;

int main()
{
 int *ptr;
 int i;
 int array[]={5,17,20,7,6};
 ptr=array;

 for(i=0;i<5;i++)
 {
    cout<<*ptr<<endl;
    ptr++;
 }
 return 0;
}