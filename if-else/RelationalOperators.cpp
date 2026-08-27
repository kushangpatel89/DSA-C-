#include<iostream>
using namespace std;
int main(){

// Relational operators are used to compare two values. 
// They return a boolean value (true or false) based on the comparison.
// The following are the relational operators in C++:
// 1. Equal to (==): Checks if two values are equal.
// 2. Not equal to (!=): Checks if two values are not equal.
// 3. Less than (<): Checks if the first value is less than the second value.
// 4. Greater than (>): Checks if the first value is greater than the second value.
// 5. Less than or equal to (<=): Checks if the first value is less than or equal to the second value.
// 6. Greater than or equal to (>=): Checks if the first value is greater than or equal to the second value.

    int a = 5;
    int b = 9;

    cout<<"a<b : " <<(a<b)<<endl; //true
    cout<<"a>b : " <<(a>b)<<endl;
    cout<<"a==b : " <<(a==b)<<endl;
    cout<<"a!=b : " <<(a!=b)<<endl;
}