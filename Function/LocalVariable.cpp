#include <iostream>
using namespace std;

// Local Variables
// Declared inside a function or block (between {})
// Scope: Accessible only within that function or block
// Lifetime: Exist only while the function/block is executing
// Memory: Stored in the stack
// Initialization: Must be explicitly initialized; otherwise contains garbage value
// Shadowing: Local variable can hide a global variable with the same name

int main() {
    int localVar = 5;  // Local variable - only accessible in main()
    
    {
        int blockVar = 3;  // Local to this block only
        cout << blockVar<<endl;
    }
    
    // cout << blockVar;  // ERROR: not accessible here
    cout<<localVar;
}

