#include<iostream>
using namespace std;

class BUSA
{
    public:
    string name1="Splender";

};
class Bike: public BUSA
{
    public:
    string name2="KTM";
};
int main()
{
    Bike bi;
    cout<<bi.name1+" "+bi.name2;
    return 0;

}