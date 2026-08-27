#include<iostream>
using namespace std;
int main(){
//Q- Take an integer input from the user 
//check if it is divisible by 5 or 3.

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%5==0 or n%3==0) cout<<n<<" is divisible by 5 or 3."<<endl;
    else cout<<n<<" is not divisible by 5 or 3."<<endl;

}