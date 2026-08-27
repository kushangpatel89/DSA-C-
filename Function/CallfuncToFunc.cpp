#include<iostream>
using namespace std;

void arjun(){ //receive call from sumit
    cout<<"Arjun is good"<<endl;
    } //return to sumit

void sumit(){ //receive call from anky
    cout<<"Sumit is good"<<endl;
    arjun();
    } // return to anky

void anky(){ //receive call from main
    cout<<"Hate you Ku-shang"<<endl;
    sumit();
    } //return to main

int main(){
    anky(); // call anky function
    // return from anky
    cout<<"Good Night"<<endl;
}