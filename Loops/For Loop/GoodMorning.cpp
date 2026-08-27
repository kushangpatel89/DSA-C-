#include<iostream>
using namespace std;
int main(){

 // for loop work as on the principle of iteration.
 // It is used to execute a block of code repeatedly for a fixed number
 // of times. The syntax of a for loop is as follows:   
 // for(initialization; condition; increment/decrement){
 //     // code to be executed
 // }
 // The initialization step is executed only once,
 // before the loop starts. 
 //The condition is checked before each iteration,
 // and if it evaluates to true, the code inside the loop is executed.
 // also increment/decrement step is executed after each iteration,
 // when the condition evaluates to false, the loop terminates,
 // and the program continues with the next statement after the loop.
    int n;
    cout<<"Enter the number : ";
    cin>>n;

//normal printing
    cout<<"Good Morning"<<endl;
    cout<<"Good Morning"<<endl;
    cout<<"Good Morning"<<endl;
    cout<<"Good Morning"<<endl;
    cout<<"Good Morning"<<endl;

//using for loop
    for(int i=0;i<n;i++){
        cout<<"Good Morning"<<endl;
    }
}