#include <iostream>
using namespace std;


int main(){

int arr[3][4] = {
    {9,4,8,4},
    {6,1,1,5},
    {3,2,3,67}
};

int maxRow = -1 , maxSum = INT_MIN  ;
for(int i=0; i<3; i++){
    int sum = 0;
    for(int j=0; j<4; j++){       
        sum += arr[i][j];
       }
     if(sum > maxSum) {
        maxSum = sum;
        maxRow = i;
     }
    }
cout<<maxRow<<" Num Row With Max Sum = "<<maxSum<<endl;
}