#include <iostream>
using namespace std;

int main() {
    int num, rev;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    
    cout << "The Reversed number: " << rev;

    return 0;
}

/*
step-1: taken a 3-digit integer input from user
step-2: assigned it to variable num
step-3: taken anathor varibale name rev
step-4: Extract the last digit using num % 10
step-5: Extract the middle digit using (num / 10) % 10
step-6: Extract the first digit using num / 100
step-7 : store total calculation in rev variable
step-8: print the reversed number
*/
