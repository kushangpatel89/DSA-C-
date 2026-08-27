#include <iostream>
#include<vector> 
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {10,20,40,70,90};
    int brr[] = {30,50,60,80};
    int m = sizeof(arr)/4 , n = sizeof(brr)/4;
    int crr[m+n];

// MEthod 1 :
// int i = 0 , j = 0 , k = 0;
//     while(i<m && j<n){
//         if(arr[i] < brr[j]){
//             crr[k] = arr[i];
//             //crr[k++] = arr[i++];
//             i++;
//         }
//         else{   // means brr[j] < arr[i]
//             crr[k] = brr[j];
//             //crr[k++] = brr[j++];
//             j++;
//         }
//         k++;
//     }

// // for remaining elements of arr and brr 
//     while(j<n){
//         crr[k++] = brr[j++];
//     }
//     while(i<m){
//         crr[k++] = arr[i++];
//     }

// Method 2 : fill crr elements from reverse order 
    int i = m-1 , j = n-1 , k = m+n-1;
    while(i>=0 && j>=0){
        if(arr[i] > brr[j]){
            crr[k] = arr[i];
            //crr[k++] = arr[i++];
            i--;
        }
        else{   // means brr[j] > arr[i]
            crr[k] = brr[j];
            //crr[k++] = brr[j++];
            j--;
        }
        k--;
    }

// for remaining elements of arr and brr 
    while(j>=0){
        crr[k--] = brr[j--];
    }
    while(i>=0){
        crr[k--] = arr[i--];
    }

// print crr[]
    for(int i = 0; i< m+n; i++){
        cout<<crr[i]<<" ";
    }
}