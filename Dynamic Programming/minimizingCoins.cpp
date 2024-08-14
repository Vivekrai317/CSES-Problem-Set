#include <bits/stdc++.h>
#define ll long long
using namespace std;    
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++)cin>>nums[i];
    vector<vector<int>>dp(n+1,vector<int>(target+1,0));
    for(int i=0;i<=target;i++){
        if(i%nums[0]==0)dp[0][i]=i/nums[0];
        else dp[0][i]=1e9;
    }
    for(int i=1;i<n;i++){
        for(int t = 0;t<=target;t++){
            int nottake=dp[i-1][t];
            int take=1e9;
            if(nums[i]<=t){
                take=1+dp[i][t-nums[i]];
            }
            dp[i][t]=min(take,nottake);
        }
    }
    if(dp[n-1][target]>=1e9)cout<<-1<<endl;
    else cout<<dp[n-1][target]<<endl;
return 0;
}