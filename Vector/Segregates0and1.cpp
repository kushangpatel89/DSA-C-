#include <iostream>
#include<vector> 
#include<algorithm>

using namespace std;

int main(){
   vector<int> arr = {0,1,1,0,1,0,1,0,1,0};
   int n = arr.size();

   for(int ele : arr){
         cout<<ele<<" ";
        }
    cout<<endl;
 
   //Method 1:
//    int zeros = 0;
//    int ones = 0;
//         // Count 0s and 1s
//         for (int i = 0; i < n; i++) {
//             if (arr[i] == 0)
//                 zeros++;
//             else
//                 ones++;
//         }

//         // Fill 0s
//         for (int i = 0; i < zeros; i++) {
//             arr[i] = 0;
//         }

//         // Fill 1s
//         for (int i = zeros; i < zeros + ones; i++) {
//             arr[i] = 1;
//         }
//     for(int ele : arr){
//         cout<<ele<<" ";
//     }

// Method 2 : shifting i and j
    int i = 0, j=n-1;
    while(i<j){
        if(arr[i]==0) i++;
        else if(arr[j]==1) j--;
        else if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int ele : arr){
         cout<<ele<<" ";
        }
}
