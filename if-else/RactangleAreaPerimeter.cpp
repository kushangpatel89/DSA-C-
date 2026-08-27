#include<iostream>
using namespace std;
int main(){
// Q. Take length and breadth of a rectangle as input from user
// Write a Program to find area and perimeter of rectangle
// check whether area is greater than perimeter or not. 
    
    float l , b;
    cout<<"Enter length :";
    cin>>l;
    cout<<"Enter breadth :";
    cin>>b;

    float a = l * b;
    float p = 2 * (l + b);
    cout<<"Area of rectangle is "<<a<<endl;
    cout<<"Perimeter of rectangle is "<<p<<endl;

    if(a>p) cout<<"Area is greater than perimeter";
    else if(a<p) cout<<"Perimeter is greater than area";
    else cout<<"Area is equal to perimeter";
      
}
