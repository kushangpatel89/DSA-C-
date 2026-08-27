#include<iostream>
using namespace std;
int main(){
    int x = 8;
   cout<<"x = "<<x<<endl;
   x++; //post increment operator    
   cout<<"x = "<<x<<endl;
   x--; //post decrement operator
   cout<<"x = "<<x<<endl;   
   ++x; //pre increment operator
   cout<<"x = "<<x<<endl;
    --x; //pre decrement operator
    cout<<"x = "<<x<<endl;
//example 1:
    int y = x++ + --x;
    cout<<"y = "<<y<<endl;
//example 2:
     y = x++ + ++x;
    cout<<"y = "<<y<<endl;
    
}
