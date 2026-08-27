#include<iostream>
using namespace std;

// write a function to find smalle number

void Sum(int a,int b,int c){ //receive call from main
    cout<<"sum = "<<a+b+c<<endl;
    }

int main(){
    int x,y,z;
    cout<<"Enter x and y and z = ";
    cin>>x>>y>>z;
    Sum(x,y,z);
    
}