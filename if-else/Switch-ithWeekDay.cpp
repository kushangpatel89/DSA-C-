#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number between 1 and 7: ";  
cin>>n;

//Method 1: using if else statement
if(n==1) cout<<"Monday";
else if(n==2) cout<<"Tuesday";
else if(n==3) cout<<"Wednesday";
else if(n==4) cout<<"Thursday";
else if(n==5) cout<<"Friday";
else if(n==6) cout<<"Saturday";
else if(n==7) cout<<"Sunday";
else cout<<"Invalid Input";

cout<<endl;
//Method 2: using switch statement

switch(n){
    case 1: cout<<"Monday"; break;
    case 2: cout<<"Tuesday"; break;
    case 3: cout<<"Wednesday"; break;
    case 4: cout<<"Thursday"; break;
    case 5: cout<<"Friday"; break;
    case 6: cout<<"Saturday"; break;
    case 7: cout<<"Sunday"; break;
    default: cout<<"Invalid Input";
}
}