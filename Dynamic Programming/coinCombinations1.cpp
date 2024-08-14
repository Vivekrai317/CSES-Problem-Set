#include <bits/stdc++.h>
using namespace std;
int main(){
int n,x;
int mod = 1e9+7;
cin>>n>>x;
vector<long long>coins(n);
for(int i=0;i<n;i++)cin>>coins[i];
vector<long long>dp(x+1,0);
dp[0]=1;
for(int i=1;i<=x;i++){
    for(int j=0;j<n;j++){
        if(coins[j]<=i){
            dp[i]=(dp[i]+dp[i-coins[j]])%mod;
        }
    }
}
cout<<dp[x]<<endl;
return 0;
}