#include <iostream>
using namespace std;

// Return Type Function Explanation
// A return type function is a function that returns a value to the caller.
// The return type specifies what data type the function will give back
//   when it completes execution.

// Key Concepts:
// Return Type Basics
// Declared before function name: int function(), double calculate(), string getName()
// void return type: Function performs actions but returns nothing (like your current code)
// Non-void return type: Function must include a return statement with a value

void fun(int n){
    cout<<n<<endl;
    if(n>20) return;
    cout<<n*n<<endl;
    }

int main(){
   
fun(17);
    
}