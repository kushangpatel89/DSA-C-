#include <iostream>
#include<vector>     // include vector library
using namespace std;

int main(){

// How std::vector works in C++
// std::vector is a dynamic array container from <vector>.
// Internally, it manages a contiguous block of heap memory.

// The vector stores:
// size() = number of active elements
// capacity() = amount of allocated storage

// Core behavior
// When you create a vector, it allocates memory for some capacity.
// Adding elements with push_back() stores them sequentially.
// If size() == capacity(), vector allocates a larger block, 
//     moves or copies existing elements, then frees the old block.
// Because capacity grows geometrically, push_back() is amortized O(1).
    vector<int> v;
    // add elements in vector:
    v.push_back(5);
    v.push_back(9);
    v.push_back(0);
    v.push_back(2);
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

// Important properties :
// Contiguous storage means:
// &v[0] points to the first element
// pointer arithmetic works like arrays
// Random access is O(1):
// v[i]
// v.at(i) with bounds checking
// Elements can be inserted or erased, but mid-container changes are O(n)

// Common operations
// v.push_back(x)
// v.pop_back()
// v.size()
// v.capacity()
// v.reserve(n) — preallocate storage to avoid reallocations
// v.clear() — keeps capacity, removes elements
// v.begin(), v.end() — iterator support
}