#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>n;
    n.assign(9,1);

    cout<<"the content are: ";
    for(int a=0;a<n.size();a++)
    {
        cout<<n[a]<<" ";
        cout<<endl;

    }
     n.push_back(2);
     int no=n.size();
    cout<<"Last element : "<<n[no-1]<<endl;

    n.pop_back();
    cout<<"Now the ontain are :";

    for(int a=0;a<n.size();a++)
    {
        cout<<n[a]<<" ";
        cout<<endl;
    }
    n.insert(n.begin(),7);
    cout<<"First element is :"<<n[0]<<endl;

    n.clear();
    cout<<"Now the size is :"<<n.size();

    return 0;
}