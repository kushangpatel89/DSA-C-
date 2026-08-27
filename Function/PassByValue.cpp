#include <iostream>
using namespace std;

// Pass by Value Explanation
// What It Is:
// Pass by value means the function receives a copy of the variable,
//      not the original.
// Any changes made inside the function affect only the copy,
//      not the original variable.

void change(int x){
    x = 20;
}

int main(){
    int x = 10;
    change(x);
    cout<<x;
   
}