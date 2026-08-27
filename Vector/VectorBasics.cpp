#include <iostream>
#include<vector>     // include vector library
using namespace std;

int main(){

// create a vector:
vector<int> v;          // Empty vector
vector<int> v2(5);      // 5 element initialize to zero (index 0 to 4)
vector<int> v3(5,10);   // 5 element each = 10

// adding elements:
v.push_back(10);
v.push_back(20);
v.push_back(30);
v2.push_back(15);
v2.push_back(25);
v3.push_back(30);

// accessing elements :
cout<<v[0]<<endl;       // method 1
cout<<v.at(1)<<endl;    // method 2
cout<<v.front()<<endl;  // first element
cout<<v.back()<<endl;   // last element
cout<<v2.front()<<endl;  
cout<<v3.back()<<endl;

// Traversing a Vector:
// 1. Using Index:
for(int i=0; i<v.size(); i++){    // size of vector = v.size()
    cout<< v[i] <<" ";
}
cout<<endl;
for(int i=0; i<v2.size(); i++){
    cout<< v2[i] <<" ";
}
cout<<endl;
for(int i=0; i<v3.size(); i++){
    cout<< v3[i] <<" ";
}
cout<<endl;

// 2. Using range base for loop:
for(int x : v){
    cout<<x<<" ";
}
cout<<endl;
for(int x : v2){
    cout<<x<<" ";
}
cout<<endl;

// 3. Using Iterator :
for(auto i=v.begin(); i != v.end(); i++){
    cout<<*i<<" ";
}
cout<<endl;
for(auto i=v3.begin(); i != v3.end(); i++){
    cout<<*i<<" ";
}
cout<<endl;

// Removing Elements:
v.pop_back();    // remove last element
v3.clear();       // remove all element
for(int x:v){
    cout<<x<<" ";
}
cout<<endl;
for(int x:v3){
    cout<<x<<" ";
}
cout<<endl;

}