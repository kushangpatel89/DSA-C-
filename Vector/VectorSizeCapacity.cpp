#include <iostream>
#include<vector>     // include vector library
using namespace std;

int main(){
    vector<int> v;
   //Adding Elements
    v.push_back(5);
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Size:"<<v.size()<<" "<<"Capacity "<<v.capacity()<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
cout<<endl;

vector<int> v2(7);
v2.push_back(-6);
cout<<"Size:"<<v2.size()<<" "<<"Capacity: "<<v2.capacity()<<endl;
}