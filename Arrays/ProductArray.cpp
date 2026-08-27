#include <iostream>
using namespace std;

int main(){

  int arr[] = {5 ,10 ,15 ,20};
  int n = sizeof(arr)/4;
  int prod = 1;

  for(int i = 0; i < n ; i++){
    prod *= arr[i];
  }
cout<<"Product of Elements = "<<prod;
}
