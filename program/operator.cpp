#include<iostream>
using namespace std;

class Increse
{
    private:
    int value;

    public :
    Increse()
    {
        value=10;

    }
    void operator ++()
    {
      value=value+2;

    }
    void display()
    {
        cout<<"value is::"<< value<<endl;
    }

};
int main()
{
    Increse Inc;
    ++Inc;
    Inc.display();
    return 0;

}
