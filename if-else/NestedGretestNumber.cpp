#include<iostream>
using namespace std;
int main(){
//Q- find a gretest number among three numbers by nested if else statement.
    int a,b,c;
    cout<<"Enter Three Numbers: ";
    cin>>a>>b>>c;;
    if(a>b){
        if(b>c) cout<<a<<" is the greatest number.";
        else cout<<c<<" is the greatest number.";
    }
    else{
       if(b>c) cout<<b<<" is the greatest number.";
       else cout<<c<<" is the greatest number.";
    }   
}