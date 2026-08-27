#include <iostream>
using namespace std;

int main(){

  int arr[] = {-10,18,20,25,-50,-9};
  int n = sizeof(arr)/4;

  for(int i = 0; i < n ; i++){
    if(arr[i] < 0)
        cout << arr[i]<<" ";
  }

}
