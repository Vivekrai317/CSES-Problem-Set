#include <iostream>
#include <vector>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<long long> v;
 for(int i=0;i<n;i++){
    int input;
    cin>>input;
    v.push_back(input);
 }
 long long ans=0;
 for(int i=0;i<n-1;i++){
    if(v[i+1]<v[i]){
        ans+=v[i]-v[i+1];
        v[i+1]=v[i]; 
    }
 }
 cout<<ans<<endl;
return 0;
