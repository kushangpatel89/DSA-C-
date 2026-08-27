#include<iostream>
using namespace std;
int main(){
//Q- Take a character as input from the user 
//check if it a capital alphabet or not.

    char n;
    cout<<"Enter a Character: ";
    cin>>n;
    cout<<n<<endl;
 
//Method 1:
       if(n>='A' && n<='Z') cout<<n<<" is a capital alphabet."<<endl;
       else cout<<n<<" is not a capital alphabet."<<endl;

//Method 2:ASCii value of A=65 and Z=90
       if(n>=65 && n<=90) cout<<n<<" is a capital alphabet."<<endl;
       else cout<<n<<" is not a capital alphabet."<<endl;       
}