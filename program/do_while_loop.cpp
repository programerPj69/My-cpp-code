// C++ Program to print numbers from 1 to 5 using do_while loop

#include <iostream>

using namespace std;

int main() {
    int i = 1; 

    // do...while loop from 1 to 5
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 5);
    
    return 0;
}