#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 268. Missing Number

// Given an array nums containing n distinct numbers in the range [0, n],
//  return the only number in the range that is missing from the array.

//  Example 1:
// Input: nums = [3,0,1]   Output: 2
// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3].
//  2 is the missing number in the range since it does not appear in nums.

// Example 2:
// Input: nums = [0,1]     Output: 2
// Explanation:
// n = 2 since there are 2 numbers, so all numbers are in the range [0,2].
//  2 is the missing number in the range since it does not appear in nums.

// Example 3:
// Input: nums = [9,6,4,2,3,5,7,0,1]   Output: 8
// Explanation:
// n = 9 since there are 9 numbers, so all numbers are in the range [0,9].
//  8 is the missing number in the range since it does not appear in nums.

int main(){
    vector<int> nums = {3,0,1,2,5};
    int n = nums.size();
//Method:1 - check flag true/false Nested Loop   
    // for(int i=0; i<=n; i++){
    //     bool flag = false; // means i not present in array
        
    //     for(int ele : nums){
    //         if(ele == i){
    //             flag = true;
    //             break;
    //         }                
    //     }
    // if(flag == false){
    //     cout<<"Missing Number is : "<<i<<" ";    
    //     break;
    //    }
    // }

//Method 2: sort the array and check i 
// sort(nums.begin(),nums.end()); // sort the array
// for(int i=0; i<n; i++){
//     if(i != nums[i]){ // check i present in array or not
//         cout<<"Missing Number is : "<<i;
//     }
// }

//Method 3: Maths --> sum(arr) - sum(0 to n) = Missing Number
    // int sumArr = 0 , sumN = 0;
    // for(int i=0; i<n; i++){
    //     sumArr += nums[i];
    // }
    // for(int i=0; i<=n; i++){
    //     sumN += i;
    // }
    // cout<<"Sum of Array = "<<sumArr<<endl;
    // cout<<"Sum of Numbers = "<<sumN<<endl;
    // int mn = sumN - sumArr;
    // cout<<"Missing Number = "<<mn; 

//Method 4: Extra Space
//Create boolean array and check for true element and return false
//true = present false = Missing

vector<bool> flag(n+1,false); // n+1 size all element =  false means missing
//Mark Numbers That are Present    
for(int i=0; i<n; i++){
        flag[nums[i]] = true;
    }
//Find the Missing Number
    for(int i=0; i<=n; i++){
        if(flag[i] == false){
            cout<<"Missing Number = "<<i<<endl;
        }    
    }
}