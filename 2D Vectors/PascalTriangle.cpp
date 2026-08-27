#include <iostream>
#include<vector> 
using namespace std;

int main(){
    int n = 5; // no of rows
    vector<vector<int>> ans; // create empty vector

    // create 2D vector size from 1 to n and fill all with initial value 1
    for(int i=0; i<=n; i++){
        ans.push_back(vector<int> (i+1,1));
    
    //formula to fill the element with pascal triangle value
        for(int j=1; j<i; j++){
            ans[i][j] = ans[i-1][j-1] + ans[i-1][j]; // same above row and j increses
        }
        
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}