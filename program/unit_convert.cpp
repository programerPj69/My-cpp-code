#include<iostream>
using namespace std;

int main()
{
    int y,f,i;
    cout<<"Enter inches to convert";
    cin>>i;

    y=i/432;
    i=i%432;
    f=i/12;
    i=i%12;

    cout<<"\n After convert unite inches::";
    cout<<"\n yard ::"<<y<<"\nfeet"<<f<<"\n inches"<<i<<endl;
    return 1;

}
