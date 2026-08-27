#include<iostream>
using namespace std;
int main(){

//Write a program to find GP of nth terms:
//Geometric progression(GP) 
//General format GP : a2/a1 = a3/a2 = a4/a3  ... = r
//where a = first term and r = common ratio.
//nth term = An = a * r^(n-1)
//sum of first n terms : Sn = a(r^n -1)/(r-1)

// Q. Display GP - 1,2,4,8,16,32 ...n Terms
// n = 10 , a = 1 , r = 2.

int n, a, r ;
cout<<"Enter Total number of Terms n : ";
cin>>n;
cout<<"Enter First Term a: ";
cin>>a;
cout<<"Enter Common Ratio r : ";
cin>>r;

for(int i=1; i<=n; i++){
    cout<<a<<" ";
    a *= r;
}

}
