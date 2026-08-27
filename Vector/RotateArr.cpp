#include <iostream>
#include<vector> 
using namespace std;
// 189. Rotate Array
// Hint
// Given an integer array nums, rotate the array to the right by k steps
//  , where k is non-negative.

// Example 1:
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
void reverse(vector<int> &arr, int i, int j){
    while (i<j)
        {
            swap(arr[i],arr[j]); //built in swap function
            i++;
            j--;
        }          

}

int main(){
   vector<int> arr = {70,60,50,40,30,20,10};
   int n = arr.size();
   int k;
   cout<<"Enter No of Rotation K : ";
   cin>>k;
   k = k % n;
   reverse(arr, 0, n-1);
   reverse(arr, 0, k-1);
   reverse(arr, k, n-1);

   for(int ele : arr){
    cout<<ele<<" ";
   }
  
}

