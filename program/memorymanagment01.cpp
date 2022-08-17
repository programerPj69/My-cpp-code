// memory managment Example for new and delete
#include<iostream>
using namespace std;

int main()
{
    int size;
    int *ptr;

    cout<<"Enter the size: ";
    cin>>size;

    ptr=new int[size];
    cout<<"Enter the element :: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Element :";
        cin>>ptr[i];

    }
    cout<<"\nElement that you have entered !::"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Element=> "<<ptr[i]<<endl;

    }
    delete ptr;

 

}