#include<iostream>
using namespace std;
int main(){
//Q- Take an integer input from the user 
//check if it is divisible by 
//5 or 3/only by 3/only by 5/both 5 and 3/not divisible by 5 or 3 .

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%5==0 && n%3==0) cout<<n<<" is divisible by both 5 and 3."<<endl;
    else if(n%5==0 && n%3!=0) cout<<n<<" is divisible by 5."<<endl;
    else if(n%3==0 && n%5!=0) cout<<n<<" is divisible by 3."<<endl;
    else cout<<n<<" is not divisible by 5 or 3."<<endl;

}