#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {4, 2, 9, 10, 6, 8, 20};
    int left = 0;
    int right = a.size() - 1;
    int target = 16;
    string ans = "false";
    
    sort(a.begin(), a.end());  // Sorting the array
    
    while (right > left) { 
        int sum = a[left] + a[right];
        
        if (sum == target) {
            ans = "true";
            break;  // Exit the loop once the pair is found
        }
        else if (sum < target) {
            left++;  // Move the left pointer if the sum is less
        }
        else {
            right--;  // Move the right pointer if the sum is more
        }   
    }

    cout << ans;
    
    return 0;
}
