#include<iostream>
using namespace std;
int main(){
//Q- Take a positive integer as input from the user 
//check its magnitude is smaller than 69 or not.

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
       if(n>-69 && n<69) cout<<"Magnitude is smaller than 69."<<endl;
       else cout<<"Magnitude is greater than 69."<<endl;
}