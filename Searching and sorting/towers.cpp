#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>s(n);
    for(int i=0;i<n;i++){
        s[i]=nums[i];
    }
    sort(s.begin(),s.end());
    
    int ans=0;
    if(s==nums){
        ans=1;
    }
    else{
        ans=0;
    }
    for(int i=0;i<n-1;i++){
        if(nums[i]<nums[i+1]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}