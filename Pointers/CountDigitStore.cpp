#include <iostream>
using namespace std;

void countDigits(int n,int* p){
    int count = (n==0)? 1 : 0 ;
    while(n!=0){
        count++;
        n /= 10;
    }
    *p = count;
}

int main(){
    int n ;
    cout<<"Enter n = ";
    cin>>n;    
    int c = 0;
    countDigits(n,&c);
    cout<<"Number of digits = "<<c;
}