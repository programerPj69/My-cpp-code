// is_polymorphic example
#include<iostream>
using namespace std;

class Animal
{
    public:
    void speed()
    {
        cout<<"Who is more faster"<<endl;

    }
};
class ghoda: public Animal
{
  public:
  void speed()
  {
    cout<<"Im Faster in race"<<endl;
  }

};
class cow: public Animal
{
    public:
    void speed()
    {
        cout<<"i gave fastes milk";

    }
};

int main()
{
    Animal ani;
    ghoda gho;
    cow c;

    ani.speed();
    gho.speed();
    c.speed();
    return 0;

}