#include <iostream>
using namespace std;

int main(){
    int i;
    cin>>i;
    int *ptr;
    ptr=&i;

    cout<<"The value of i:: "<<i<<endl;
    cout<<"The value of ptr:: "<<ptr<<endl;
    cout<<"The value of *ptr:: "<<*ptr<<endl;
   
   return 0;

}