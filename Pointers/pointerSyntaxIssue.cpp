#include <iostream>
using namespace std;


int main(){
    int x = 14 , y=25;
    // int* p1 = &x , *p2 = &y // gives error -Invalid Syntax
    int* p1 = &x;
    int* p2 = &y;
    cout<<*p1<<" "<<*p2<<endl;
    
    }