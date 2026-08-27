#include<iostream>
using namespace std;
int main(){
//Q- given 2 quadrants of a point in 2D plane, 
//find the quadrant of the point.
//also find if the point is on X-axis, Y-axis or at origin.

    int x,y;
    cout<<"Enter the coordinates of a point: ";
    cin>>x>>y;
      if(x>0 && y>0) cout<<"The point is in 1st Quadrant.";
      else if(x<0 && y>0) cout<<"The point is in 2nd Quadrant.";
      else if(x<0 && y<0) cout<<"The point is in 3rd Quadrant.";
      else if(x>0 && y<0) cout<<"The point is in 4th Quadrant.";
      else if(x==0 && y==0) cout<<"The point is at origin.";
      else if(x==0 && y!=0) cout<<"The point is on Y-axis.";
      else if(y==0 && x!=0) cout<<"The point is on X-axis.";

}