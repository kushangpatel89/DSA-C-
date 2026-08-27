#include <iostream>
using namespace std;

// Pointer in C++

// Definition: A pointer is a variable that stores the memory address 
//     of another variable.
// Declaration: T* p; declares p as a pointer to type T (e.g., int* p;).
// Getting an address: Use the address-of operator: p = &x; stores x's address in p.
// Dereferencing: Use *p to access or modify the value at the address p holds.
// Pointer arithmetic: For pointers to arrays, p + 1 moves to the next element of type T.
// Pointer to pointer: T** pp; stores the address of a pointer.
// Null pointer: Use nullptr (C++11+) to indicate "no address".
// Common pitfalls: Dangling pointers (pointing to freed/local memory), 
//    uninitialized pointers, and out-of-bounds pointer arithmetic.
// Best practices: Initialize pointers, check for nullptr before dereferencing, 
//    prefer references when nullability isn't needed, 
//    and use smart pointers (std::unique_ptr, std::shared_ptr) for ownership management.

int main(){

  int a = 10;
    int* p = &a;         // p holds address of a
    cout<<&a<<endl;      // print address of a
    cout<<p<<endl;       // print address of a
    cout << *p << '\n';  // prints 10
    *p = 20;             // modifies a via pointer
    cout << a << '\n';   // prints 20
    cout<<&p<<endl;      // print address of pointer
  
  }