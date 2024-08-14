#include <bits/stdc++.h>
using namespace std;
int main(){
    long long mod=1000000007;
    long long n;
    cin>>n;
    long long ans=1;
    while(n>=1){
        ans=(ans*2)%mod;
        n--;
    }
    cout<<ans;
    return 0;
}