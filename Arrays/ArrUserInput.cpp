#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter Size of Array : ";
cin>>n;

  int arr[n];

  for(int i = 0; i < n; i++){
    cout<<"element "<<i<<" = ";
    cin >> arr[i];
  }

  cout << "Array elements: ";
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
