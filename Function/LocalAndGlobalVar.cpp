#include <iostream>
using namespace std;

int global = 100;  // Global variable

void display() {
    cout << global;  // Can access global
    // cout << local;  // ERROR: local not accessible here
}

int main() {
    int local = 50;  // Local variable to main
    
    cout << global;   // Can access global
    cout << local;    // Can access local
    
    display();

}


