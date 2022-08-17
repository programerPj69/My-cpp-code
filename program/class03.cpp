#include<iostream>
using namespace std;

class list
{
  private:
  void setTitle()
  {
   string title;
  }
   public:
   string setTitle(string x)
   {
    title=x;
   }
  string getTitle()
    {
     return Title;
    }
};

int main()
{
 list li;
 li.setTitle("Top 100 song of 2020");
 cout<<li.getTitle();
 return 0;

}