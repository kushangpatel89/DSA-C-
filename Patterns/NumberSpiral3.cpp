#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter n:";
cin>>n;

// run i and j upto 7 if n=4
for(int i=1; i<=2*n-1; i++){  
    for(int j=1; j<=2*n-1; j++){
        int a=i , b=j;
        if(i>n) a = 2*n-1;  // make i 321 for 567
        if(j>n) b = 2*n-1;  // make j 321 for 567 
         cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
   
}