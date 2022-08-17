#include<iostream>
using namespace std;

class India 
{
    private:
    int population;

    public:
    India()
    {
        population =100000000;
    }
    void operator ++()
    {
        population=population+1000;

    }
    void display()
    {
        cout<<"The population of India Is ::"<<population<<endl;
    }
};
int main()
{
    India Ind;
    ++Ind;
    Ind.display();
    return 0;

}