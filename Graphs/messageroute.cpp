#include <bits/stdc++.h>
using namespace std;
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
    vector<int>parent(n+1,-1);
    queue<int>q;
    q.push(1);
    visited[1]=1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it : adj[node]){
            if(!visited[it]){
                q.push(it);
                visited[it]=1;
                parent[it]=node;
            }
        }
    }
    if(!visited[n]){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    vector<int>res;
    int curr = n;
    while(curr!=1){
        res.push_back(curr);
        curr=parent[curr];
    }
    res.push_back(1);
    cout<<res.size()<<endl;
    for(int i = res.size()-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
    cout<<endl;
return 0;
}