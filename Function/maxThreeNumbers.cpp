#include <iostream>
using namespace std;

int maximum(int a,int b,int c){
    return max(a ,max(b,c));
}

int main(){
    cout<<maximum(15,20,25);
}