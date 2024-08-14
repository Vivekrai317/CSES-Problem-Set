#include <bits/stdc++.h>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>songs(n);
    for(int i=0;i<n;i++){
        cin>>songs[i];
    }
    set<int>heard;
    int i=0;
    int j=0;
    int ans=0;
    while(i<n && j<n){
        if(!heard.count(songs[j])){
            heard.insert(songs[j]);
            ans=max(ans,j-i+1);
            j++;

        }
        else{
            heard.erase(songs[i]);
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}