#include <iostream>
using namespace std;

// 2D array is like a table with Rows and Columns

int main(){

int brr[3][4];
// This means:

// 3 rows
// 4 columns
// Total = 3 × 4 = 12 elements
// You can visualize it as:
//         col 0  col 1  col 2  col 3
// row 0     1      2      3      4
// row 1     5      6      7      8
// row 2     9     10     11     12

// Creating and initializing
int arr[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 1, 4, 2}
};

//Accessing an element
cout << arr[1][2]<<endl;

// 2. Traversing a 2D array
for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    // traverse change row and column
for(int j=0; j<4; j++){
    for(int i=0; i<3; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
}