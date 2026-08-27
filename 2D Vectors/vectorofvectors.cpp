#include <iostream>
#include<vector> 
using namespace std;

int main(){

    vector<int> v1 = {3,7,2,8,9};
    vector<int> v2 = {9,2,9};
    vector<int> v3 = {4,4,4,4};
    vector<int> v4 = {10};

// Method 1 : Jagged Array
    vector<vector<int>> v = {v1,v2,v3,v4};
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

// Method 2 : push_back Array
    vector<vector<int>> vv;
    vv.push_back(v1);
    vv.push_back(v2);
    vv.push_back(v3);
    vv.push_back(v4);

    for(int i=0; i<vv.size(); i++){
        for(int j=0; j<vv[i].size(); j++){
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }

// Add another Vector v5 at last 
v.push_back(vector<int>(5,-1)); // 5 size vector with initial value -1

  for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}