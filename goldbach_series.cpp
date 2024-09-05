#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int k){
    if(k<=1) return false;
    if(k==2) return false;
    for(int i=3;i*i<=k;i+=2){
        if(k%i==0)
        return false;
    }
    return true;
}
int main(){
    int n;
    vector<int>arr;
    cin>>n;
    for (int i = 1; i < n; i++)
    {
       if(checkPrime(i) && i%2!=0){
            arr.push_back(i);
       }

       
    }

    map<int,int> mapz;
    int k=0;
    for (int i = 0; i < arr.size(); i++)
    {
       for (int i = 0; i < arr.size(); i++)
       {
        mapz[arr[i]+arr[j]]=k++;
       }
       
    }
    

    for (int i = 0; i < arr.size(); i++)
    {
       
        for(int j=0; j<arr.size(); j++){
             cout<<"Number: "<<arr[i]+arr[j]<<endl<<"Pair: "<<arr[i]<<" "<<arr[j]<<endl;
        }
    }
    

    
    
    return 0;
}