#include<iostream>
using namespace std;

void arjun(){ //receive call from main
    cout<<"Arjun is good"<<endl;
    }

void sumit(){ //receive call from main
    cout<<"Sumit is good"<<endl;
    }

void anky(){ //receive call from main
    cout<<"Hate you Ku-shang"<<endl;
    }

int main(){
    sumit();
    anky(); // call anky function
    arjun();
}