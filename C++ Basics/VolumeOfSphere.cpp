#include<iostream>
using namespace std;
int main(){

    float radious ;
    cout<<"Enter Radious : ";
    cin>>radious;

    float pi = 3.141592;

    //formula for volume of a sphere (4/3)*pi*r^3
    float Volume = (4.0/3.0)*pi*radious*radious*radious; 
    cout<<"Volume of a Sphere is : ";
    cout<<Volume<<endl;
}
