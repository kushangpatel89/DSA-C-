#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int sum=0;
while(n != 0){
    int ld = n%10; // find last digit 
    sum += ld; // add last digit everytime
    n /= 10; //to remove last digit untill 0
    cout<<sum<<endl;
}

}