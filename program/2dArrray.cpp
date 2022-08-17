#include<iostream>
#include<array>
using namespace std;

int main()
{
    int row ={1,2,3,4,5,};
    int column={2,3,4,5,6};
    int a[row][column];
     
     for(int i=0;i<=row;i++)
     {
        for(int j=0;j<=column;j++){
            cout<<a[i][j];
        }
     }

return 0;
}