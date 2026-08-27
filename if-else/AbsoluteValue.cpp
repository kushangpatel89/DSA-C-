#include<iostream>
using namespace std;
int main(){
    
// Q. Write a program to print the absolute value of a number.
// Absolute value of a number is the non-negative value of that number without regard to its sign.
// it is a mod operation. 
// For example, the absolute value of -5 is 5, and the absolute value of 5 is also 5.
// to change a negative number to positive number we can multiply it with -1 
//or we can use the built-in function abs() in C++.  
    
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    if(n>=0) cout<<"Absolute value of number is : "<<n;
    else cout<<"Absolute value of number is : "<<-n;

   
}