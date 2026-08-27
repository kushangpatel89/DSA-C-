#include<iostream>
using namespace std;
int main(){
   
// Q. Take cost price and selling price as input from user 
// check whether the seller has made profit or loss or no profit no loss.
// also check the amount of profit or loss.    
    int costPrice, sellingPrice;
    cout<<"Enter cost price :";
    cin>>costPrice;
    cout<<"Enter selling price :";
    cin>>sellingPrice;

//Method 1: using only if statement:
    if(sellingPrice > costPrice) cout<<"Profit is "<<(sellingPrice - costPrice);
    if(sellingPrice < costPrice) cout<<"Loss is "<<(costPrice - sellingPrice);
    cout<<"No Profit No Loss";

//Method 2:using if-else-if ladder
    if(sellingPrice > costPrice) cout<<"Profit is "<<(sellingPrice - costPrice);
    else if(sellingPrice < costPrice) cout<<"Loss is "<<(costPrice - sellingPrice);
    else cout<<"No Profit No Loss";

//Method 3:using if-else statement
    if(sellingPrice > costPrice) cout<<"Profit is "<<(sellingPrice - costPrice);
    else{
        if(sellingPrice < costPrice) cout<<"Loss is "<<(costPrice - sellingPrice);
        else cout<<"No Profit No Loss";
    }
}