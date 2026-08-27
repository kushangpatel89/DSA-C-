#include <iostream>
using namespace std;

int x = 8; // globle variable
int main(){
    
    int x = 55; // local variable

    cout<<x<<endl; // access local variable
    cout<<::x<<endl; // access global variable using ::
  
  }