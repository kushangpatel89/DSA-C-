#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";   
    cin>>n;
    
    //Method 1: normal if else statement
    if(n%2==0) cout<<n<<" is Even.";
    else cout<<n<<" is Odd.";
    
    // Method 2: Ternary operator
    (n%2==0)? cout<<n<<" is Even." : cout<<n<<" is Odd.";

    cout<<(n%2==0? "Even" : "Odd");
}