#include<iostream>
#include<cmath>
using namespace std;
int main(){
  //A do-while loop executes the code block first, 
  //then checks the condition. 
  //This guarantees the code runs at least once.  

  //Syntex :
  int i=10;          // intitialization+declaration
  do{       
    cout<<i<<" ";   //do{Body for work}
    i++;            //increment/decrement
  }while(i<=5);     //while(condition)

}