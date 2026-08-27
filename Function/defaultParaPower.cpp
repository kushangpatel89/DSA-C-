#include <iostream>
using namespace std;

void power(int base, int exp = 2){
    int ans = 1;
    for(int i=1; i<=exp; i++)
        ans *= base;    
    cout<<ans<<endl;
}

int main(){

    power(5);
}