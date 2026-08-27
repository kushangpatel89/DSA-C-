#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;

int count = 0;
if(n==0) cout<<count++;

    while(n != 0){
        n /= 10;
        count++;
        cout<<n<<endl;
    }
cout<<count;

}