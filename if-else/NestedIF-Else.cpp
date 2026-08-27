#include<iostream>
using namespace std;
int main(){
//Nested if-else statement is a conditional statement 
//that allows you to check multiple conditions 
//and execute different blocks of code based on those conditions.
//Q- Take an integer input from the user
//check if it is divisible by 5 or 3.   

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%5==0){
        if(n%3==0) cout<<n<<" is divisible by both 5 and 3."<<endl;
        else cout<<n<<" is divisible by 5."<<endl;
    }
    else{
        if(n%3==0) cout<<n<<" is divisible by 3."<<endl;
        else cout<<n<<" is not divisible by 5 or 3."<<endl;
    }
}