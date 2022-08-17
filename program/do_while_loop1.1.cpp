// program to find the sum of positive numbers
// using do while loop 
#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number >= 0);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}