#include <iostream>
using namespace std;

// Function Overloading
// Function overloading is a C++ feature that lets you define multiple functions
//  with the same name but different parameter lists.

void func(int x, float y){
    cout<<"Hi Anky"<<endl;
}

void func(double x, int y){
    cout<<"Hi Karan"<<endl;
}

void func(char y, float x){
    cout<<"Hi Mohan"<<endl;
}
    

int main(){
    func(5,8.8);
    func(55.2,8);
    func('a',5.2);
}