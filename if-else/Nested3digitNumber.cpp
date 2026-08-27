#include<iostream>
using namespace std;
int main(){
//Q- find number is 3 digit or not by nested if else statement.
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n>=100){
        if(n<=999) cout<<n<<" is a 3-digit number."<<endl;
        else cout<<n<<" is not a 3-digit number."<<endl;
    }
    else cout<<n<<" is not a 3-digit number."<<endl;
}