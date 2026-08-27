#include<iostream>
using namespace std;
int main(){

//Write a program to find AP of nth terms:
//Arithmetic progression(AP) 
//General format AP : a, a+d, a+2d, a+3d....
//where a = first term and d = common Difference
//nth term = An = a + (n-1)d.
//Last term l = a + (n-1)d.

// Q. Display AP - 3,7,11,15,19...n Terms
// n = 10 , a = 3 , d = 4.

int n, a, d ;
cout<<"Enter Total number of Terms n : ";
cin>>n;
cout<<"Enter First Term a: ";
cin>>a;
cout<<"Enter Common Difference d : ";
cin>>d;

for(int i=1; i<=n; i++){
    cout<<a<<" ";
    a += d;
}


}
