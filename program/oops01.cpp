// inheritance example02
#include<iostream>
using namespace std;

class kapde
{
    public:
    string name1="t-shirt from jara";

};
class clothe: public kapde
{
    public:
    string name2="jense from LEVISE ";
};

int main()
{

    clothe clot;
    cout<<clot.name1+"    "+clot.name2;
    return 0;

}