#include<iostream>
using namespace std;
int main(){
// star triangle vertically Fliped for n=4. 
//       *       
//     * *    
//   * * *
// * * * *
//Logic : if i+j>n print * else print 'space'
// print a squre first where before star is consider as space.
int n;
cout<<"Enter n:";
cin>>n;

//Method 1:
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){ 
//         if((i+j)>n) cout<<"* ";
//         else cout<<"  ";
        
//     }cout<<endl;
// }

//Method 2:
for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){  //space
        cout<<"  ";
    }
    for(int k=1; k<=i; k++){    //star
        cout<<"* ";
    } cout<<endl;
    
}
}