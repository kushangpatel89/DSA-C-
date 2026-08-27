#include<iostream>
using namespace std;
int main(){
    // print the star Pyramid
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
//Logic: saperate in two parts space triangle + Addstar triangle
// space triangle: i=1 to n and j=1 to n-i 
//add star triangle: i=1 to n and j=1 to 2*i-1

int n;
cout<<"Enter n:";
cin>>n;

//Method 1:
// for(int i=1; i<=n;i++){
//     for(int j=1; j<=n-i;j++){
//         cout<<"  ";
//     }
//     for(int j=1; j<=2*i-1; j++){
//         cout<<"* ";
//     }
//       cout<<endl;
//     }
 
//Method 2: Define Number of space(nsp) nad number of star(nst)
// for n=4
// line 1: 3nsp and 1 nst
// line 2: 2nsp and 3 nst
// line 3: 1nsp and 5 nst
// line 4: 0nsp and 7 nst
// where nsp start feom n-1 and nst starts from 1
// nsp decresind by -1 so nsp--
// nst incresing by +2 so nst+2
int nsp = n-1, nst = 1;
for(int i=1; i<=n; i++){
    for(int j=1; j<=nsp; j++){  //space
        cout<<"  ";
    }
    for(int k=1; k<=nst; k++){  //star
        cout<<"* ";
    }
    nsp--;
    nst+=2;
    cout<<endl;
}

    
}
