#include <bits/stdc++.h>
using namespace std;
class DisjointSet{
    private :
        vector<int>parent,rank,size;
    public :
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1);
        size.resize(n+1);
        for(int i = 0 ;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUPar(int u){
        if(u == parent[u]){
            return u;
        }
        else{
            return parent[u]=findUPar(parent[u]);
        }
    }
    void unionByRank(int u,int v){

    }
    void unionBySize(int u,int v){
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if(ulp_u== ulp_v){
            return;
        }
        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
int main(){
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    if(ds.findUPar(5)==ds.findUPar(7)){
        cout<<"Same"<<endl;
    }

    if(ds.findUPar(3)!=ds.findUPar(6)){
        cout<<"Not same"<<endl;
    }
    // for(int i = 1;i<=7;i++){
    //     cout<<"Ultimate parent of "<<i<<" is "<<ds.findUPar(i)<<endl;
    // }
return 0;
}

        int n = grid.size();
        DisjointSet ds(n*n);
        for(int row =0;row<n;row++){
            for(int col = 0;col<n;col++){
                if(grid[row][col]==0){
                    continue;
                }
                int delrow[]={-1,0,1,0};
                int delcol[]={0,1,0,-1};
                for(int i =0;i<4;i++){
                    int nrow = row + delrow[i];
                    int ncol = col + delcol[i];
                    if(nrow >=0 && nrow <n && ncol >=0 && ncol<n && 
                    grid[nrow][ncol]==1){
                        int node = row*n + col;
                        int adjnode = nrow*n + ncol;
                        ds.unionBySize(node,adjnode);
                    }
                }
            }
        }
        //step 2
        int ans=0;
        for(int row =0;row<n;row++){
            for(int col =0;col<n;col++){
                if(grid[row][col]==1){
                    continue;
                }
                unordered_set<int>st;
                int delrow[]={-1,0,1,0};
                int delcol[]={0,1,0,-1};
                for(int i=0;i<4;i++){
                    int nrow = row + delrow[i];
                    int ncol = col + delcol[i];
                    if(nrow >=0 && nrow<n && ncol >=0 && ncol<n 
                    && grid[nrow][ncol]==1){
                        int adjnode = nrow*n+ncol;
                        st.insert(ds.findUPar(adjnode));
                    }
                }
                int tempsize=0;
                for(auto it : st){
                    tempsize+=ds.size[it];
                }
                ans = max(ans,tempsize + 1);
            }
        }
        // for(int i=0;i<n*n;i++){
        //     ans = max(ans,ds.size[ds.findUPar(i)]);
        // }
        if(ans==0){
            ans = ds.size[0];
        }
        return ans;