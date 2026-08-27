
#include<iostream>  
#include<climits>
#include<cfloat>
using namespace std;
int main(){

// range of data types in C++
// int, char, float, double
// we can use the header file <climits> for int and char
// we can use the header file <cfloat> for float and double
// here 1 byte = 8 bits
// Memory taken by data types:
// int,float = 4bytes = 32bits = -2^32 to + (2^32 - 1)
// long long , double = 8bytes = 64bits 

    cout<<"Range of int: "<<INT_MIN<<" to "<<INT_MAX<<endl;
    cout<<"Range of char: "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl;
    cout<<"Range of float: "<<FLT_MIN<<" to "<<FLT_MAX<<endl;
    cout<<"Range of double: "<<DBL_MIN<<" to "<<DBL_MAX<<endl;

    long long x = LLONG_MAX;
    long long y = LLONG_MIN;
    cout<<"x:"<<x<<" y:"<<y<<endl;

    short a = SHRT_MAX;
    short b = SHRT_MIN;
    cout<<"Short Max range : "<<a<<" Short minimum Range :"<<b<<endl;

    unsigned int AK = UINT_MAX;
    cout<<"Unsighned Range : "<<AK ;

  //unsigned data type is used  
       

    return 0;
}