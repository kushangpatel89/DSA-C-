#include <iostream>
using namespace std;

// Pass by Reference
// The function receives an alias to the original variable.
// Changes inside the function modify the original value.

void change(int* x){
        *x = 20;
}
int main(){
    int x = 10;
    cout<<x<<endl;
    change(&x);
    cout<<x<<endl;   
    }
