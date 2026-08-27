#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter n:";
cin>>n;

// upper half
for(int i=1; i<=n; i++){         // i - 1 to n
    for(int j=1; j<=n; j++){     // part 1: j 1 to n
        cout<<min(i,j)<<" ";     // in built min fuct to find minimum 
        }
     for(int j=n-1; j>=1; j--){  //part 2: j- n-1 to 1
        cout<<min(i,j)<<" ";     // in built min fuct to find minimum 
        }
        cout<<endl;
    }
//Lower half
for(int i=n-1; i>=1; i--){       // i - n-1 to 1
    for(int j=1; j<=n; j++){     // part 1: j 1 to n
        cout<<min(i,j)<<" "; 
        }
     for(int j=n-1; j>=1; j--){  //part 2: j- n-1 to 1
        cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
   
}