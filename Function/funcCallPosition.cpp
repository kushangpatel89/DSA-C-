#include<iostream>
using namespace std;

void arjun(){ //receive call from sumit
    cout<<"Arjun is good"<<endl; // print(2)
    }//return to sumit

void sumit(){ //receive call from anky
    arjun(); //call to arjun
    cout<<"Sumit is good"<<endl; // print after return from arjun (3)
    }//return to anky

void anky(){ //receive call from main
    cout<<"Hate you Ku-shang"<<endl;// print(1)
    sumit(); //call to sumit
    }//return to main

int main(){
    anky(); // call anky function
}