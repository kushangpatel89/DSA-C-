#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Rows and column:";
    cin>>m>>n;
    for(int i=1; i<=m; i++){            //rows
        for(int j=1; j<=n; j++){        //columns
           if(i==1 || i==m || j==1 || j==n) cout<<" * ";
           else cout<<" - ";
        }
        cout<<endl;
    }
}