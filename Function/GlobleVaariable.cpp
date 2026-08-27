#include <iostream>
using namespace std;

//     Global Variables : 
// Declared outside of all functions (typically at the top of the file)
// Scope: Accessible throughout the entire program and from any function
// Lifetime: Exist for the entire duration of the program
// Memory: Stored in the data segment
// Initialization: Automatically initialized to 0 (for built-in types)

int globalVar = 10;  // Global variable

void someFunction() {
    cout << globalVar;  // Also accessible here
}

int main(){
    cout << globalVar<<endl;  // Accessible here
    someFunction();
}


