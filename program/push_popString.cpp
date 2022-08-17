#include<iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a strint ";

    getline(cin,s);

    cout<<"you have enter: "<<endl;
    cout<<s;
     
     s.push_back('i');
     cout<<"\n after push back the string is :"<<s<<endl;

    s.pop_back();
    cout<<"\n after pop back the string is : "<<s<<endl;

    return 0;
}