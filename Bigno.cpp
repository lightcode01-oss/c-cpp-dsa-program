#include<iostream>
using namespace std;
int main()
{
    int a , b;
    cout<<"Enter 1st numbers: ";
    cin>>a; 
    cout<<"Enter 2nd numbers: ";
    cin>>b;
    if(a>b)
    {
        cout<<a<<" is bigger number";
    }
    else
    {
        cout<<b<<" is bigger number";
    }
}

/*
step-1: taken two integer inputs from user
step-2: assigned it to variables a and b
step-3: used if-else condition to compare both numbers
step-4: print the bigger number
*/