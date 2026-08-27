#include<iostream>
using namespace std;
int main(){

    float radious ;
    cout<<"Enter Radious : ";
    cin>>radious; //take user input for radious of circle

    float pi = 3.141592;
    float area = pi*radious*radious;

    cout<<"Area of a Circle is : ";
    cout<<area<<endl;
}
