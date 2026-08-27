#include <iostream>
using namespace std;

void change(int x[]){
    x[0] = 15;
}

int main(){
  int arr[7]; //Static Allocation
  int* brr = new int[7]; //Dynamic Allocation
  brr[0] = 4;
  cout<<brr[0]<<endl;

  for(int i=0; i<7; i++){
    cout<<brr[i]<< " ";
  }

 
}