#include<iostream>
using namespace std;

void starTriangle(int n){
    
    for(int i=1; i<=n; i++){            //rows
        for(int j=1; j<=i; j++){        //columns
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
 int a,b,c;
    cout<<"Enter a , b ,c : ";
    cin>>a>>b>>c;
    starTriangle(a);
    starTriangle(b);
    starTriangle(b);


    // int a;
    // cout<<"Enter a: ";
    // cin>>a;
    // starTriangle(a);
    
    // int b;
    // cout<<"Enter b: ";
    // cin>>b;
    // starTriangle(b);
    
    // int c;
    // cout<<"Enter c: ";
    // cin>>c;
    // starTriangle(c);
}