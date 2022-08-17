#include<iostream>
using namespace std;

class Rajkamal
{
    private:
    int age;

    public:
    Rajkamal()
    {
    age=19;
    }
    void operator ++()
    {
        age=age+1;
    }
    void display()
    {
        cout<<"MY current age is "<<age<<endl;
    }

};
int main()
{
    Rajkamal Raj;
    ++Raj;
    Raj.display();
    return 0;

}