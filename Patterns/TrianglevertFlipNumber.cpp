#include<iostream>
using namespace std;
int main(){
// Number triangle vertically Fliped for n=4. 
//       1       
//     1 2    
//   1 2 3
// 1 2 3 4
//Logic : saperate in two parts space triangle + star squre
// space triangle i=1 to n and j=1 to n-i
// star squre i=1 to n and k=1 to i.
int n;
cout<<"Enter n:";
cin>>n;


for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){  //space
        cout<<"  ";
    }
    for(int k=1; k<=i; k++){    //Number
        cout<<(char)(i+64)<<" "; //for number --> k
    } cout<<endl;
    
}
}