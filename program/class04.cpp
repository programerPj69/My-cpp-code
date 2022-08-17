#include<iostream>
using namespace std;


 class billboard
 {
    private:
    string title;

    public:
    billboard(string b)
    {
        setTitle(b);
        
    }
    void setTitle(string a)
    {
        title=a;

    }
    string getTitle()
    {
        return title;

    }
 };
int main()
{
    billboard bill("top !10 bekar song ");
     cout<<bill.getTitle();
     return 0;

}