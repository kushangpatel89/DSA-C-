#include <iostream>
using namespace std;

// Function Overloading
// Function overloading is a C++ feature that lets you define multiple functions
//  with the same name but different parameter lists.

void func(int x){
    cout<<"Hi Anky"<<endl;
}

void func(double x){
    cout<<"Hi Karan"<<endl;
}

void func(char y){
    cout<<"Hi Mohan"<<endl;
}
    

int main(){
    func(5);
    func(55.2);
    func('a');
}