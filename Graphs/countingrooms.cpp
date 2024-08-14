#include <bits/stdc++.h>
using namespace std;

void bfs(int i,int j,vector<vector<int>>&visited,vector<vector<char>>&grid){
    queue<pair<int,int>>q;
    q.push({i,j});
    visited[i][j]=1;
    int n=grid.size();
    int m=grid[0].size();
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m
            && !visited[nrow][ncol] && grid[nrow][ncol]=='.'){
                q.push({nrow,ncol});
                visited[nrow][ncol]=1;
            }
        }
    }
}
int main(){
int n,m;
cin>>n>>m;
vector<vector<char>>grid(n,vector<char>(m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
    }
}
vector<vector<int>>visited(n,vector<int>(m,0));
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!visited[i][j] && grid[i][j]=='.'){
            count++;
            bfs(i,j,visited,grid);
        }
    }
}
cout<<count<<endl;
return 0;
}