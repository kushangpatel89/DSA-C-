#include <iostream>
using namespace std;

int main(){
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr)/sizeof(arr[0]); // Calculate the number of elements in the array

  cout << "Address of the array: " << arr << endl;
  cout << "Number of elements in the array: " << n << endl;
  cout << &arr[0] << endl;
  cout << &arr[1] << endl;
  cout << &arr[2] << endl;
  cout << &arr[3] << endl;
}