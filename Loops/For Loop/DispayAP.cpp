#include<iostream>
using namespace std;
int main(){

// Display this AP - 2 5 8 11 14 17...n terms
//Arithmetic progression(AP) 
//General format AP : a,a+d,a+2d+a+3d....
//where a = first term and d = common Difference
//nth term = An = a + (n-1)d.
//Last term l = a + (n-1)d.
//Here a = 2 and d = 3 so nth term An = 3n-1  

//Tke n as user input:
int n;
cout<<"Enter a Terms: ";
cin>>n;

//Method 1:
    for(int i = 1; i<=n; i++){
        cout<<3*i-1<<" ";
    }
 cout<<endl;
//Method 2:
    for(int i=2; i<=3*i-1; i+=3){
        cout<<i<<" ";
    }
cout<<endl;
//Method 3:
    int a;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a+=3;
    }

}
