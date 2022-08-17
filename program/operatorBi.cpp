// BInary operator overloding
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imag;

    public:
    void input()
    {
        cout<<"Enter real and imag part respactively ";
        cin>>real;
        cin>>imag;
    }
    Complex operator +(Complex obj)
       {Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
       }
    void output()
    {
     cout<<"Output is::"<<real<<"+"<<imag<<"i";


    }
};

int main()
{
    Complex Com1,Com2,res;
   cout<<"Enter the first number \n";
   Com1.input();
   cout<<"Enter secound complex number \n";
   Com2.input();

   res=Com1+Com2;
   res.output();

   return 0;

}