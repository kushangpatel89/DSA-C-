#include<iostream>
using namespace std;
int main(){
    // int x = -35;
    // if(x) cout<<"Anky"; // correct as x!=0 then it is True
    // else cout<<"Ku-shang";

    // float x = -3.5;
    // if(x) cout<<"Anky"; // correct as x!=0 then it is True
    // else cout<<"Ku-shang";

    // float x = -0.0004;
    // if(x) cout<<"Anky"; // correct as x!=0 then it is True
    // else cout<<"Ku-shang";

    // int a = 4;
    // if(a==4) cout<<"Anky"; // correct
    // else cout<<"Ku-shang";

    //  int a = 0;
    // if(a==0) cout<<"Anky"; // correct
    // else cout<<"Ku-shang";

    //  int a = 0;
    // if(a=0) cout<<"Anky"; // means a = False
    // else cout<<"Ku-shang"; // correct

    // if ('K') cout<<"Anky"; // correct as 'K' is not 0 then it is True
    // else cout<<"Ku-shang";

    // int z = 4;
    // if(z++) cout<<z; // correct as z!=0 then it is True and z will be incremented to 5
    // else cout<<"Ku-shang";

    // int m=4 , n = 6;
    // if(m++ || n++) cout<<m<<" "<<n; // correct as m!=0 and n!=0 then it is True and m will be incremented to 5 and n will be incremented to 6
    // else cout<<"Ku-shang";

    int z = 0;
    if(z++) cout<<z; 
    else cout<<"Ku-shang"; // correct as z=0 then it is False and z will be incremented to 1
}