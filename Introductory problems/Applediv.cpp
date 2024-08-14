#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++){
        long long input;
        cin>>input;
        v.push_back(input);
    }
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    // cout<<sum;
    long long ans=INT_MAX;
    for(int i=0;i<(1<<n)-1;i++){
        long long c=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                c+=v[j];
            }
        }
        ans=min(ans,abs(sum-c-c));
    }
    cout<<ans;
    
    return 0;
}