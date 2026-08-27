#include <iostream>
using namespace std;

// Double Pointer

// Definition: A double pointer is a pointer to a pointer
// (e.g., int **pp) — it stores the address of another pointer,
// not the address of a direct object.
// Declaration / access: int x; int *p = &x; int **pp = &p; 
// then *pp is p and **pp is x.

int main(){

    int x = 10;
    int* p1 = &x;
    int** p2 = &p1; // to store the address of p1 pointer
// Print the value of x
    cout<<x<<endl; // value of x
    cout<<*p1<<endl; // value of p1 = x
    cout<<**p2<<endl; // value of pointer p1 = x
// print address of x 
    cout<<&x<<endl; // address of x
    cout<<p1<<endl; // address of x
    cout<<*p2<<endl; // address of pointer p1

}