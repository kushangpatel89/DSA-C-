#include<iostream>
using namespace std;
int main(){

// find a raise to power b.
// a^b = axaxaxa/b times.
//2^5 = 2x2x2x2x2 = 32.

int a;
cout<<"Enter base a: ";
cin>>a;
int b;
cout<<"Enter Exponate b: ";
cin>>b;

int pow = 1;
for(int i=1; i<=b; i++){ //run the loop 1 to b times.
    pow *= a; // keep multiply a upto b time.
    if(a==1) break;
}

if(a==0 and b==0) cout<<"Indeterminate Form";
cout<<pow;

}