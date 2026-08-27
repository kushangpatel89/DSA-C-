#include <iostream>
#include<vector>     // include vector library

using namespace std;

void change(vector<int> &v){
    v[2] = 99;
}

int main(){
    vector<int> v = {4,3,8,2,9};
    change(v);

    for(int ele : v)
    cout<<ele<<" ";

}