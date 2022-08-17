// Abstration cpp example

#include<iostream>
using namespace std;

class trade
{
    private:
    int Cupons;
    
    public:
    void setCupons(int c)
    {
        Cupons=c;
    }
    int getCupons()
    {
        return Cupons;
    }

};


int main()
{
  trade t;
  t.setCupons(50);
  cout<<"Coupon :"<<t.getCupons();
  return 0;


}