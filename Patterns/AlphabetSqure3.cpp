#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter Squre size:";
    cin>>m;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            if(i%2==0) cout<<(char)(i+64)<<" ";
            else cout<<(char)(i+96)<<" ";
        }
        cout<<endl;
    }
}