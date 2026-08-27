#include <iostream>
using namespace std;


int main(){

int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 1, 4, 2}
};

int mx = arr[0][0];
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";
        if(arr[i][j] > mx)
        mx = arr[i][j];
    }
    cout<<endl;
    }
cout<<"Maximun element = "<<mx<<endl;
}