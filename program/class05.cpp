#include<iostream>
using namespace std;

class vediogame
{
    public:
    vediogame()
    {
        cout<<"PUBG Is LOVE"<<endl;
    }
    ~vediogame()
    {
        cout<<"FF is tatti"<<endl;
    }
    void display()
    {
        cout<<"BGMI !"<<endl;
    }
};


int main()
{
    vediogame game;
    game.display();
    return 0;

}