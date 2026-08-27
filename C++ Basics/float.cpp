#include<iostream>
using namespace std;
int main(){
    float x = 5;
    float y = 2;
                    //output
    cout<<x+y<<endl; //7
    cout<<x-y<<endl; //3
    cout<<x*y<<endl; //10
    cout<<x/y<<endl; //2.5 --> float print number after decimal
//use float to get number after decimal
    cout<<5/2<<endl; //2 --> int print only integer part
    cout<<5.0/2<<endl; //2.5 --> float print number after decimal
    cout<<5/2.0<<endl; //2.5 --> float print number after decimal
    cout<<5.0/2.0<<endl; //2.5 --> float print number after decimal

}
