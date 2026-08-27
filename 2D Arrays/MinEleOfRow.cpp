#include <iostream>
using namespace std;
int main(){

int arr[3][4] = {
    {9,4,8,4},
    {6,1,1,5},
    {3,2,3,6}
};

for(int i=0; i<3; i++){
    int mn = INT_MAX;
    for(int j=0; j<4; j++){  
       if(arr[i][j] < mn)
            mn = arr[i][j];
       }
    cout<<"Row"<<i<< " Min element = "<<mn<<endl;
    }
}
