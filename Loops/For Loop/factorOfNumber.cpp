#include<iostream>
#include<cmath>
using namespace std;
int main(){
// Write a program to find factor of any number

int n;
cout<<"Enter a Number:";
cin>>n;
//Method 1:
// i  is a factor of n if n%i==0.
// check the loop upto n times
for(int i=1; i<=n; i++ ){
    if(n%i==0) cout<<i<<" ";
}
cout<<endl;
//Method 2:
//check the loop only upto squreroot of n times
for(int i=1; i<=sqrt(n); i++ ){   //use i*i<=n replace of sqrt(n)
    if(n%i==0) cout<<i<<"x"<<n/i<<" ";
}
}
