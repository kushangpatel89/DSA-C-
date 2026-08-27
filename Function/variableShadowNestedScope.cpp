#include <iostream>
using namespace std;

int main(){
    int x = 10;
    {
        int x=8; // scope only inside {}
    }

  cout<<x<<endl; // output = 10
  
  {
    x = 7;
  }
  cout<<x; //output = 7
  
}