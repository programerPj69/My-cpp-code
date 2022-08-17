#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    int sum=0;
    int sub=0;
    int *ptr1;
    int *ptr2;

    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter secound number::"<<endl;
     cin>>num2;
     ptr1=&num1;
     ptr2=&num2;

     (*ptr1)++;
     (*ptr2)++;

     cout<<"After increment "<<endl;
     cout<<*ptr1<<endl;
     cout<<*ptr2<<endl;
     

     sum=*ptr1+*ptr2;
     cout<<"The sum is "<<sum;

     (*ptr1)--;
     (*ptr2)--;
     
     cout<<"\n After dicrement "<<endl;
     cout<<*ptr1<<endl;
     cout<<*ptr2<<endl;

     sub=*ptr1-*ptr2;
     cout<<"The sub is "<<sub<<endl;

     return 0;

}