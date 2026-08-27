#include <iostream>
using namespace std;

int main(){
    int a=8,b=7;
    cout<<a<<" "<<b<<endl;
  //Method 1 : using extra variable temp
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
  
  //Method 2 : without using extra variable
    a = a + b;
    b = a - b;
    a = a -b;
  cout<<a<<" "<<b<<endl;

  //Method 3: Direct formula
    a = (a+b) - (b=a);
    cout<<a<<" "<<b<<endl;

  //Method 4: In Built swap Function
    swap(a,b);
    cout<<a<<" "<<b<<endl;
  }