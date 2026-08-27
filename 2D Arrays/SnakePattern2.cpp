#include <iostream>
using namespace std;
int main(){

    int arr[4][5] = {
        {6,0,9,2,3},
        {5,2,6,0,9},
        {8,4,8,1,7},
        {4,1,7,3,5}};

    for(int i=0; i<5; i++){
        if(i%2 == 0){
            for(int j=0; j<4; j++){
                cout<<arr[j][i]<<" ";
                }
        }
        else{
            for(int j=3; j>=0; j--){
                cout<<arr[j][i]<<" ";
                }

        }
    }
}