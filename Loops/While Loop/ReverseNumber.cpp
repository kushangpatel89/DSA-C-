#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int Rev = 0; // to store last number 
int sum = 0;
while(n != 0){
    int ld = n%10;
    Rev *= 10; // multiply last numbers by 10
    Rev += ld; // add last digit after multiply last number by 10
    sum += ld;
    n /= 10; //remove last digit from a number
        
    //Rev = Rev * 10 + n % 10;
   cout<<Rev<<endl;
}
cout<<Rev<<endl;
cout<<sum;

}