#include<iostream>
using namespace std;

// write a function to find smalle number

void min_Two(int a,int b){ //receive call from main
    if(a<b) cout<<a<<" is smaller"<<endl;
    else cout<<b<<" is smaller"<<endl;
    }

int main(){
    int x,y;
    cout<<"Enter x and y = ";
    cin>>x>>y;
    min_Two(x,y);
    
}