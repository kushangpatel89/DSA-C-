#include<iostream>
using namespace std;
int main(){
//Q- Take three numbers as input from the user
//check which one is the greatest.

    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
       if(a>=b && a>=c) cout<<a<<" is the greatest."<<endl;
       else if(b>=a && b>=c) cout<<b<<" is the greatest."<<endl;
       else cout<<c<<" is the greatest."<<endl;
} 
