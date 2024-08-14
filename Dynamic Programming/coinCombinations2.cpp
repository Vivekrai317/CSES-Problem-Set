#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x;
cin>>n>>x;
int mod = 1e9+7;
vector<long>coins(n);
for(int i=0;i<n;i++)cin>>coins[i];
vector<vector<int>>dp(n,vector<int>(x+1,-1));
for(int i=0;i<=x;i++){
    if(i%coins[0]==0)dp[0][i]=1;
    else dp[0][i]=0;
}
for(int index=1;index<n;index++){
    for(int target=0;target<=x;target++){
        int nottake=dp[index-1][target];
        int take=0;
        if(coins[index]<=target){
            take = dp[index][target-coins[index]];
        }
        dp[index][target]=(take+nottake)%mod;
    }
}
cout<<dp[n-1][x]<<endl;
return 0;
}