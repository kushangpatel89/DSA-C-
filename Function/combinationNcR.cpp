#include <iostream>
using namespace std;

int fact(int a){
    int fact = 1;
    for(int i=1;i<=a;i++){
        fact *= i;
        }
        return fact;
    }

int main(){
   
int n,r;
cout<<"Enter n and r: ";
cin>>n>>r;

 cout<<fact(n)<<endl;
 cout<<fact(r)<<endl;

    int k = n-r;

    int ncr = fact(n)/(fact(r)*fact(k));
    cout<<"Combination n to r = "<<ncr<<endl;

}