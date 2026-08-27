#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter n:";
cin>>n;

// first line * for n=5 i=1 to 2*n-1
for(int i=1; i<=2*n-1; i++){
    cout<<"* ";
}
cout<<endl;
n--;

for(int i=1; i<=n; i++){
    for(int j=1; j<=n+1-i; j++){  //part 1 - *
        cout<<"* ";
    }
    for(int j=1; j<=2*i-1; j++){  // part 2 - space 
        cout<<"  ";
    }
    for(int j=1; j<=n+1-i; j++){  // part 3 - *
        cout<<"* ";
    }
    cout<<endl;
}
}