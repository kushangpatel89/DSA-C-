#include <iostream>
#include<vector>     // include vector library
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {4,3,8,2,9};
    
    //Reverse the element 
    reverse(v.begin(),v.end()-2);
    for(int ele : v) cout<<ele<<" ";

    cout<<endl;
    //sort the elements of vector
    sort(v.begin(),v.end()-1);
    for(int ele : v) cout<<ele<<" ";

     cout<<endl;
    //sort the elements of vector
    reverse(v.begin(),v.end()-2);
    for(int ele : v) cout<<ele<<" ";



}
