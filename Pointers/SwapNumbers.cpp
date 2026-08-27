#include <iostream>
using namespace std;

// Pass by Reference
// The function receives an alias to the original variable.
// Changes inside the function modify the original value.

void swap(int* x,int*y){
    int temp;    
    temp = *x;
    *x = *y;
    *y = temp;

}
int main(){
    int x = 14 , y=25;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;  
    }
