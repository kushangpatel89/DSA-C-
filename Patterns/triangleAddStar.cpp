#include<iostream>
using namespace std;
int main(){
// Number triangle vertically Fliped for n=4. 
// *             
// * * *       
// * * * * *  
// * * * * * * * 
//Logic : i=1 to n and j=1 to 2i-1.
// print a squre first where before star is consider as space.
int n;
cout<<"Enter n:";
cin>>n;

//Method 1:
for(int i=1; i<=n;i++){
    for(int j=1; j<=2*i-1; j++){
        cout<<"* ";
    }
      cout<<endl;
    }


//Method:2
// int star = 1;
// for(int i=1; i<=n;i++){
//     for(int j=1; j<=star; j++){
//         cout<<"* ";
//     }
//     star += 2;
//     cout<<endl;
//     }
    
}
