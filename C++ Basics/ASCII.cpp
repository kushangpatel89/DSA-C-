#include<iostream>
using namespace std;
int main(){
    //ASCII is a character encoding standard that uses numbers to represent characters. 
    //Each character is assigned a unique number, known as its ASCII code.
    // For example, the ASCII code for the letter 'A' is 65, 'a' is 97. 
    //The ASCII standard includes codes for letters, digits, punctuation marks, and control characters. 
    char c = '/';
    int ascii = (int)c; //casting char to int to get ASCII value
    cout<<"ASCII value of "<<c<<" is : "<<ascii<<endl;
    cout<<"Character is : "<<c<<endl; 

    //int to char conversion
    int asciiValue = 80;
    char character = (char)asciiValue; //casting int to char to get character
    cout<<"Character for ASCII value "<<asciiValue<<" is : "<<character<<endl;

    //add ascii value of two characters
    char c1 = 'A';  
    char c2 = 'a';
    int sum = (int)c1 + (int)c2; //casting char to int to get ASCII value and adding them
    cout<<"Sum of ASCII values of "<<c1<<" and "<<c2<<" is : "<<sum<<endl;
}
