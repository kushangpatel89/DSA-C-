#include<iostream>
using namespace std;
int main(){

    float p, r , t;
    cout<<"Enter principal amount : ";
    cin>>p;
    cout<<"Enter rate of interest : ";
    cin>>r;
    cout<<"Enter time period : ";
    cin>>t;

    float simpleInterest = (p * r * t) / 100;

    cout<<"Simple Interest is : ";
    cout<<simpleInterest<<endl;
}
