#include <iostream>
using namespace std;

int main(){

  int arr[] = {25 ,55 ,15, 35 ,20};
  int n = sizeof(arr)/4;
  int mx = arr[0] , smx = arr[0];


  for(int i = 0; i < n ; i++){
    if(arr[i] > mx)
    mx = arr[i];
  }

  for(int i = 0; i < n ; i++){
    if(arr[i] > smx && arr[i] != mx)
    smx =  arr[i];
  }


cout<<"Maximum Element = "<<mx<<endl;
cout<<"Second Max Element = "<<smx;
}
