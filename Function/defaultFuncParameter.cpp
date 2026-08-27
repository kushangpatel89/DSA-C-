#include <iostream>
using namespace std;

void func(int age = 26){ // set default parameter
    cout<<"My age is "<<age;
}

int main(){
    func(); // send argument without any parameter
// if default parameter not set (int age) it gives error  
// if default parameter not set need to send int value in argument like func(26)
  
}