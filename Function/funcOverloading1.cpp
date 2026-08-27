#include <iostream>
using namespace std;

// Function Overloading
// Function overloading is a C++ feature that lets you define multiple functions
//  with the same name but different parameter lists.

void func(){
    cout<<"Hi Anky"<<endl;
}

void func(int x){
    cout<<"Hi Karan"<<endl;
}

void func(int x,int y){
    cout<<"Hi Mohan"<<endl;
}
    

int main(){
    func();
    func(5);
    func(5,10);
}