#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    
    bool arr[26]={0};
    for (int i = 0; i<st.size();i++)
    {
        if(st[i]>='a' && st[i]<='z'){
            int index = st[i]-'a';
            arr[index]=true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==false){
            cout<<(char)(i+'a')<<" ";
        }
    }
    
    
    
    return 0;
}