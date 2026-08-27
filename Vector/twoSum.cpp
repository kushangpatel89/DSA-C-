#include <iostream>
#include<vector> 
using namespace std;

//  Two Sum

// You are given an array of integers nums and an integer target,
// return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution,
// and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

int main(){
    vector<int> nums = {2,7,11,15};
    int n = nums.size();
    vector<int> arr(2);
    int target = 22;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                arr[0] = i;
                arr[1] = j;
            }
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }




}