// C++ program to find the greatest number among three numbers 
// using ternary operator

#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter three numbers: ";  
cin>>a>>b>>c;

//method 1: using nested ternary operator
(a>b && a>c)? cout<<a<<" is greatest " : (b>c)? cout<<b<<" is greatest " : cout<<c<<" is greatest "; 

//method 2: 
int greatest = (a>b && a>c)? a : (b>c)? b : c;
cout<<endl<<greatest<<" is greatest number.";

//method 3:
(a>b)? (a>c)? cout<<a<<" is greatest " : cout<<c<<" is greatest " : (b>c)? cout<<b<<" is greatest " : cout<<c<<" is greatest "; 


}