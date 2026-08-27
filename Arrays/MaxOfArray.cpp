#include <iostream>
using namespace std;

int main(){

  int arr[] = {25 ,80 ,15 ,20};
  int n = sizeof(arr)/4;
  int mx = arr[0] , mn = arr[0];


//   for(int i = 0; i < n ; i++){
//     if(arr[i] > mx)
//     mx = arr[i];
//   }

//   for(int i = 0; i < n ; i++){
//     if(arr[i] < mn)
//     mn = arr[i];
//   }

  //Method 2 : Using in Built max() , min() 
  for(int i = 0; i < n ; i++){
    mx = max(mx,arr[i]);
  }

    for(int i = 0; i < n ; i++){
    mn = min(mn,arr[i]);
  }
cout<<"Maximum Element = "<<mx<<endl;
cout<<"Minimum Element = "<<mn;
}
