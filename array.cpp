#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int i,int j){
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    rotate(arr,0,n-1);
    rotate(arr,0,k-1);
    rotate(arr,k,n-1);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
    return 0;
}