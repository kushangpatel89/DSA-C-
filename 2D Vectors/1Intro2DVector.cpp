#include <iostream>
#include<vector> // use library for vector
using namespace std;

int main(){

// Declaration of 2D vector
    vector<vector<int>> v;

//Key Syntex :
    //vector<vector<int>> vectorName (Rows , vector<int> (Columns , Intitial_Value))

// Create 3 x 4 size vector
    vector<vector<int>> v1 (3,vector<int>(4,0));
    // 3 = Number of rows / 4 = num of columns / 0 = initial value

// Access elements of 2D vector
    v1[0][1] = 10;
    cout<<v1[0][1]<<endl;

// Take user input :
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v3 (m , vector<int> (n,7));
// Traverse in Vector
    for(int i=0; i<m; i++){     //Rows
        for(int j=0; j<n; j++){ //Columns
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }


}