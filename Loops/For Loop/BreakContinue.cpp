#include<iostream>
using namespace std;
int main(){
// 1. break Statement
// The break statement stops the loop completely.

for(int i=1; i<=5; i++){
    if(i == 3) 
    break; // stop the loop when i=3.
    cout<<i<<" ";
}
cout<<endl;

//2. continue Statement
//The continue statement skips the remaining code in the current iteration and starts the next iteration.
for(int i=1; i<=5; i++){
    if(i == 3) 
    continue; //skip iteration when i=3
    cout<<i<<" ";
}

}
