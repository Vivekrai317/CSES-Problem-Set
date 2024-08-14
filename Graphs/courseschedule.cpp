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
 }
 vector<int>indegree(n+1,0);
 vector<int>topo;
 for(int i=1;i<=n;i++){
    for(auto it : adj[i]){
        indegree[it]++;
    }
 }
 queue<int>q;
 for(int i=1;i<=n;i++){
    if(indegree[i]==0){
        q.push(i);
    }
 }
 while(!q.empty()){
    int node = q.front();
    topo.push_back(node);
    q.pop();
    for(auto it : adj[node]){
        indegree[it]--;
        if(indegree[it]==0){
            q.push(it);
        }
    }
 }
 if(topo.size()!=n){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
 }
 for(int i=0;i<topo.size();i++){
    cout<<topo[i]<<" ";
 }
 cout<<endl;
return 0;
}