#include<iostream>
using namespace std;
int main(){
//Q- Take a positive integer as input from the user 
//check whether it is four digit number or not.

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
       if(n>=1000 && n<=9999) cout<<n<<" is a four digit number."<<endl;
       else if(n<=-1000 && n>=-9999) cout<<n<<" is a four digit number."<<endl;
       else cout<<n<<" is not a four digit number."<<endl;
       
}