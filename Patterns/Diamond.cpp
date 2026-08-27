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
//Logic: saperate in two parts upper pyramid + lowe Reverse Pyramid
// part 1: Upper Pyramid : nsp=n-1 and nst=1 nsp-- / nst+=2
// Part 2: Lower Pyramid : nsp=1 and nst=2*n-3 nsp++ / nst-=2
// for n=4

int n;
cout<<"Enter n:";
cin>>n;

//Part1: Upper Pyramid 
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
//Part 2: Lower Pyramid 
nsp = 1, nst = 2*n-3;
for(int i=1; i<=n; i++){
    for(int j=1; j<=nsp; j++){  //space
        cout<<"  ";
    }
    for(int k=1; k<=nst; k++){  //star
        cout<<"* ";
    }
    nsp++;
    nst-=2;
    cout<<endl;
}


}