#include <bits/stdc++.h>
using namespace std;
void bfs(int x,vector<int>&visited,vector<int>adj[]){
    queue<int>q;
    q.push(x);
    visited[x]=1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj[node]){
            if(!visited[it]){
                q.push(it);
                visited[it]=1;
            }
        }
    }
}
int main(){
int n,m;
cin>>n>>m;
vector<int>adj[n+1];
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
}
vector<int>visited(n+1,0);
vector<int>ans;
int count=0;
for(int i=1;i<=n;i++){
    if(!visited[i]){
        ans.push_back(i);
        count++;
        bfs(i,visited,adj);
    }
}
cout<<count-1<<endl;
for(int i=0;i<ans.size()-1;i++){
    cout<<ans[i]<<" "<<ans[i+1]<<endl;
}
return 0;
}