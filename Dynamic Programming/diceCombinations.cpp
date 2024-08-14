#include <bits/stdc++.h>
using namespace std;
long long  mod = 1e9+7;
long long solve(int n,vector<long long>&dp){
    if(n<0)return 0;
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];
    long long temp=0;
    for(int i=1;i<=6;i++){
        temp+=solve(n-i,dp)%mod;
    }
    return dp[n] = temp%mod;
}
int main(){
    int n;
    cin>>n;
    vector<long long>dp(n+1,-1);
    long long ans= solve(n,dp);
    cout<<ans<<endl;
return 0;
}