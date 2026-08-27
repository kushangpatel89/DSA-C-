#include <iostream>
#include<vector>     // include vector library
using namespace std;

int main(){
    vector<int> v = {4,3,8,2,9};
// even elem multiply by 2 and odd element squre:

// for(int i=0; i<v.size(); i++){
//     if(v[i]%2 == 0) v[i] *= 2;
//     else v[i] *= v[i];
//     cout<<v[i]<<" ";
// }


// cout<<endl;
// for each loop : 
for(int ele : v){
    if(ele%2 == 0) ele *= 2;
    else ele *= ele;    
}
for(int ele : v) cout<<ele<<" ";
// for(int i=0; i<v.size(); i++){
//     cout<<v[i]<<" ";
//}
}