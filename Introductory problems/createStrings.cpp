#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    vector<string>ans;
    ans.push_back(str);
    while(next_permutation(str.begin(),str.end())){
        ans.push_back(str);
    }
    
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}