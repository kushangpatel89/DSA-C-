#include<iostream>
using namespace std;
int main(){
    int x = 6;
    //int y = (x>12)? x-4 : x*4;
    // int y = (x++ > 12)? x-4 : x*4; 
    // // condition is false so x will be incremented to 7 
    // // and y will be assigned to 7*4 = 28
    // cout<<y;

    int z = (x<=23)? (x>12)? x-4 : x*4 : (x<12)? x/4 : x+4;
    // condition is true so it will check the second condition 
    // which is false so z will be assigned to x*4 = 7*4 = 28
    cout<<z;
}