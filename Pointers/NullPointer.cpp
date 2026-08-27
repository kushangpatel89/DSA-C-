#include <iostream>
using namespace std;
int main(){

// Definition : a null pointer is a pointer value that intentionally points
// to no object or function.
// Creation: prefer nullptr (C++11+). Pre-C++11 alternatives: NULL or 0.
// Example:

int *p = NULL;  // or use 0 or nullptr
if(p) cout << *p; 
else cout << "null";    

}