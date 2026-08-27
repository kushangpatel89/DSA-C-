#include<iostream>
using namespace std;
int main(){
// Number triangle vertically Fliped for n=4. 
//       * * * *       
//     * * * *    
//   * * * *
// * * * *
//Logic : saperate in teo parts space triangle + star squre
// space triangle i=1 to n and j=1 to n-i
// star squre i=1 to n and j=1 to n.
int n;
cout<<"Enter n:";
cin>>n;


for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){  //space Reverse triangle
        cout<<"  ";
    }
    for(int k=1; k<=n; k++){    // * squre
        cout<<"* "; 
    } cout<<endl;
  }


}
