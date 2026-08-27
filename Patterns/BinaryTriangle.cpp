#include<iostream>
using namespace std;
int main(){
// binary triangle for n=4. 
// 1
// 0 1             
// 1 0 1
// 0 1 0 1
//Logic : if i+j=even print 1 else print 0
int n;
cout<<"Enter n:";
cin>>n;

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        if((i+j)%2 == 0) cout<<1;
        else cout<<0;
    }cout<<endl;
}

}