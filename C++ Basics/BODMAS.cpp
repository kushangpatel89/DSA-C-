#include<iostream>
using namespace std;
int main(){

    int x = 5 * 2 + 3 - 4 / 2; //BODMAS rule applied here
 //In BODMAS, the order of operations is as follows:
//1. Brackets (B)   
//2. Orders (O) (i.e. powers and square roots, etc.)
//3. Division and Multiplication (DM) (from left to right)
//4. Addition and Subtraction (AS) (from left to right)

    cout<<"Result: "<<x<<endl;
}
