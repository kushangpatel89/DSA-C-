#include<iostream>
#include<cmath>
using namespace std;
int main(){
// Write a program to check number is prime or Composite
//Prime : has exact two Factors 1 and self : 2,3,5,7,11,13...
//Composite : has more than two factors : 4,6,8,9,10,12...
// check from i=2 to (n-1) if any number found divisible(n%i==0)=Composite


int n;
cout<<"Enter a Number:";
cin>>n;
//Method 1: by count total number of factors.
// run loop up to n times
// int factor = 0; // To count number of factors
// for(int i=1; i<=n; i++){
//     if(n%i==0){
//         factor++;
//         cout<<i<<" ";
//     } 
// }
// cout<<endl;
// if(factor==1) cout<<"Neither Prime Or Composite"<<endl;
// if(factor>=3) cout<<n<<" is a Composite Number"<<endl;
// else cout<<n<<" is a Prime number"<<endl;

//Method 2: check if flag is true=composite and false=prime
//Runs loop only squreroot of n times 
bool flag = false; //false means prime number
for(int i=2; i<=sqrt(n); i++){  //also i*i<=n is same
    if(n%i==0){
        flag=true;
        break;  // to stop loop immedietly
    }
}
if(flag==true) cout<<n<<" is a Composite Number";
else cout<<n<<" is a Prime Number";

}