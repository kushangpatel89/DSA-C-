#include <iostream>
using namespace std;

// Transpose Of Matrix(GfG):
// Given a square matrix of size n x n, return the transpose matrix
//     of the given matrix.

// The transpose of a matrix is obtained by converting all the rows
// to columns and all the columns to rows.

// Examples:
// Input: mat[][] = [[1, 1, 1, 1], [2, 2, 2, 2], [3, 3, 3, 3], [4, 4, 4, 4]]
// Output: [[1, 2, 3, 4], [1, 2, 3, 4], 1, 2, 3, 4], [1, 2, 3, 4]]
// Explanation: Converting rows into columns and columns into rows.

int main(){
    int arr[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    int n = sizeof(arr)/sizeof(arr[0]);
// Original Matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
            }
      cout<<endl;        
    }   
// Transposing
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(arr[i][j],arr[j][i]);
            }
    
        }
    cout<<"--Transpose--"<<endl;
// Transpose Matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
            }
     cout<<endl;        
    }    
}
