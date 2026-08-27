#include<iostream>
using namespace std;
int main(){
    
//Method 1    
    for(int i=1;i<=100;i++){
        if(i%2!=0 && i%3==0)
        cout<<i<<" ";
    }
//Method 2
    for(int i=1;i<=100;i+=2){
        if(i%3==0)
        cout<<i<<" ";
    }
//Method 3
    for(int i=3;i<=100;i+=6){
        cout<<i<<" ";
    }
    
    return 0;
}