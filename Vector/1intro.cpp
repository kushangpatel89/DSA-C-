#include <iostream>
#include<vector>
using namespace std;

int main(){

// vector in C++
// vector is a dynamic array type in the C++ Standard Library.
// It is defined in <vector> and lives in the std namespace.

// Key properties :
// Dynamic size: can grow and shrink at runtime
// Contiguous storage: elements are stored in memory like a plain array
// Random access: supports operator[] and .at() for fast indexing
// Automatic memory management: resizes and frees memory automatically

// v.size() — number of elements
// v.capacity() — allocated storage capacity
// v.push_back(value) — append an element
// v.pop_back() — remove last element
// v.clear() — remove all elements
// v.insert(...) / v.erase(...) — insert or remove at arbitrary positions
// v.begin() / v.end() — iterator support

// When to use vector
// When you need a resizable array
// When you want safe and convenient element access
// When you want compatibility with standard algorithms

// Note
// std::vector is usually preferred over raw arrays for most C++ code
//  because it is safer and easier to use.

}