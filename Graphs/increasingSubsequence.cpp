#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<long long>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
long long maxi=0;
vector<long long>dp(n,1);
for(int index=0;index<n;index++){
    for(int prev=0;prev<index;prev++){
        if(v[prev]<v[index] && 1+dp[prev]>dp[index]){
            dp[index]=1+dp[prev];
        }
    }
    maxi=max(maxi,dp[index]);
}
cout<<maxi<<endl;
return 0;
}