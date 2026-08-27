#include <iostream>
using namespace std;

int main(){
  int marks[] = {74,96,91,57,62}; 
      cout<<marks<<endl; //address of marks
      cout<<marks[0]<<endl;
      cout<<marks[2]<<endl;
      cout<<marks[4]<<endl;
    marks[2] = 23;  // modification element
      cout<<marks[2]<<endl;
     
    cin>>marks[2];  // user input array
      cout<<marks[2]<<endl;
      
    // length of Array  
    cout<<(sizeof(marks) / sizeof(marks[0]))<<endl;
    return 0;
}
