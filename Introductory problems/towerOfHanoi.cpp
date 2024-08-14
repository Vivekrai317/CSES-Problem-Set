#include <bits/stdc++.h>
using namespace std;
void solve(int n,int a,int b,int c){
   
    if(n==0){
        return;
    }
    solve(n-1,a,c,b);
    cout<<a<<" "<<c<<endl;
    solve(n-1,b,a,c);
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    solve(n,1,2,3);
    return 0;
}