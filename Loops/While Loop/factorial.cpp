#include<iostream>
using namespace std;
int main(){
//write a program to print factorial of a number
//n! = n x n-1 x n-2 x n-3 x....x 3 x 2 x 1.
//5! = 5x4x3x2x1 = 120.

int n;
cout<<"Enter a number: ";
cin>>n;

int fact = 1;
for(int i=1; i<=n; i++){
    fact *= i;
    cout<<fact<<"x";
    }
cout<<fact;

}