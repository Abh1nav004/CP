#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
      int m = 4;
    int n = 5;
    int arr[m][n]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}

    };

    int top = 0;
    int bottom = m-1;
    int left =0;
    int right = n-1;

while(right>=left && top<=bottom){
      for (int i = left; i <= right ; i++)
  {
    a.push_back(arr[top][i]);
  }
  top++;
  for (int i = top; i <= bottom ; i++)
  {
    a.push_back(arr[i][right]);
  }
  right--;
  if(right>=left){
  for (int i = right; i >= left ; i--)
  {
    a.push_back(arr[bottom][i]);
  }
  }
  bottom--;
  if(top<=bottom){
     for (int i = bottom; i >= top ; i--)
  {
    a.push_back(arr[i][left]);
  }
  left++;
  }
 
}


for(auto it:a){
    cout<<it<<" ";
}

 
  

    return 0;
}