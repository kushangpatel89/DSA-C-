#include <iostream>
#include<algorithm>
using namespace std;
// 48. Rotate Image (Leetcode 48)

// You are given an n x n 2D matrix representing an image,
//  rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, 
// which means you have to modify the input 2D matrix directly. 
// DO NOT allocate another 2D matrix and do the rotation.
// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

// Print Normal
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

// transpose
    for(int i=0; i<3; i++){
        for(int j=0; j<i; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
// reverse each row:
    for(int i=0; i<3; i++){
        reverse(arr[i],arr[i]+3);
    }
cout<<"--Rotate Array--"<<endl;
// Print Roate 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}