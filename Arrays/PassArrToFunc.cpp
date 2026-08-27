#include <iostream>
using namespace std;

void change(int x[]){
    x[0] = 15;
}

int main(){
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr)/4 ;
  cout<<arr[0]<<endl;
  change(arr);
  cout<<arr[0]<<endl;
 
}