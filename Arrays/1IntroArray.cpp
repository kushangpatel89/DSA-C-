#include <iostream>
using namespace std;

int main(){

// Array
// An array is a collection of elements stored in contiguous memory locations.

// Each element has the same type.
// Elements are accessed by index, usually starting at 0.
// Arrays provide fast random access: array[index] is constant time.
// The size is fixed once the array is created.

// Key points
// In C++: int arr[5]; creates 5 contiguous int values.
// In Python: a list like [1, 2, 3] behaves like a dynamic array.
// Good for storing sequences of values when you know the size 
//      or need indexed access.
// Common use cases: loops, sorting, searching, 
//      and storing related values.

int nums[3] = {10, 20, 30};
cout << nums[1]; // prints 20

}