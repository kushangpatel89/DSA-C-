#include <iostream>
#include<vector> 

using namespace std;

int main(){
   vector<int> arr = {70,60,50,40,30,20,10};
   int n = arr.size();
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
cout<<endl;
   int i=0 , j=n-1;
   // to swap any part of array ,i.e- index 1 to 3 take i=1 , j=3;
        while (i<j)
        {
            // swap(arr[i],arr[j]); //built in swap function
           int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }             
                 
   for(int ele : arr){
    cout<<ele<<" ";
   }
  
}

