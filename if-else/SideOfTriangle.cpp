#include<iostream>
using namespace std;
int main(){
//Q- Take a 3 side lengths of a triangle as input from the user
//check whether it is a valid triangle or not.

    int a,b,c;
    cout<<"Enter 3 side lengths of a triangle: ";
    cin>>a>>b>>c;
       if(a+b>c && b+c>a && c+a>b) cout<<"It is a valid triangle."<<endl;
       else cout<<"It is not a valid triangle."<<endl;
} 
