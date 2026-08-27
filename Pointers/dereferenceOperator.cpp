#include <iostream>
using namespace std;
int main(){

// Dereference Operator (*) in C++
// The dereference operator is *.
// It is used with a pointer to access or modify the value stored at the memory
//  address the pointer holds.

// How it works
// If ptr is a pointer variable, *ptr means “the object pointed to by `ptr”.
Example:
int x = 10;
int *ptr = &x;
int y = *ptr; // y becomes 10

// Common uses
// Read the value pointed to:
cout << *ptr<<endl;
// Change the value through the pointer:
*ptr = 20; // changes x to 20
cout<<x<<endl;

// Important note
// The pointer must point to a valid object before dereferencing.
// Dereferencing a null or uninitialized pointer causes undefined behavior.

// Related operator
// Address-of operator & gives the pointer:
ptr = &x;
cout<<ptr<<endl;
// Dereference operator * gives the original value back:
*(&x) == x;
cout<<*(&x)<<endl;

}