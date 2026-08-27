#include <iostream>
using namespace std;

int main(){

  int arr[] = {5 ,10 ,15 ,20};
  int n = sizeof(arr)/4;
  int target;
  cout<<"Enter Value to find in Array : ";
  cin>>target;

  bool flag = false;

  for(int i = 0; i < n ; i++){
   if(arr[i] == target){
        flag = true;
        break;
    }
  }
  if(flag == true) cout<<target<<" Present in Array.";
  else cout<<target<<" Not Present in Array";
}
