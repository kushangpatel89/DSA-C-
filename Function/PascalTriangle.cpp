#include<iostream>
using namespace std;
// Print pascal Triangle
//             1  
//           1  1  
//         1   2  1  
//       1   3  3  1  
//     1   4  6  4  1  
//   1   5  10  10  5  1  

// All numbers are combination n and r = i(row) and j(column)
// first part = space triangle = i=0 to n / j= 0 to n-i
// second part = Number combination (n=i) to (r=j) 

int fact(int a){ //factorial function
    int fact = 1;
    for(int i=1;i<=a;i++){ 
        fact *= i;
        }
        return fact;
    }

int ncr(int n, int r){ //combination formula
    int k = n-r;
    return fact(n)/(fact(r)*fact(k));
}

int main(){
   int n;
   cout<<"Enter n: ";
   cin>>n;
   
   for(int i=0;i<=n; i++){ // no os rows from 0 to n
    for(int j=0;j<=n-i; j++){ //spaces
        cout<<" "; 

    }
    for(int j=0;j<=i; j++){  // combination n(i) to r(j)
        cout<<ncr(i,j)<<" ";
    }
    cout<<endl;
   }

}