#include<iostream>
using namespace std;
int main(){

// print the Diamond
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
//     * * * * *
//       * * *
//         * 
//Logic: create whole diamond by print space or * usinf if else
// Space : nsp=n-1 and nst=1 nsp-- / nst+=2
// Star * : nsp=1 and nst=2*n-3 nsp++ / nst-=2
// for n=4 i=1 to 7 i.e. i=2*n-1
// here if i<n nsp--and nst+=2 / else nsp++ and nst-=2 

int n;
cout<<"Enter n:";
cin>>n;

int nsp = n-1, nst = 1;
// Basic to print star and space
for(int i=1; i<=2*n-1; i++){
    for(int j=1; j<=nsp; j++){  //space
        cout<<"  ";
    }
    for(int k=1; k<=nst; k++){  //star
        cout<<"* ";
    }
// Apply condition for star and space increment/decrement
    if(i<n){  // upto middle part
        nsp--;
        nst+=2;
    }
    else{     // after middle part
        nsp++;
        nst-=2;
    }
    cout<<endl;
  }
}