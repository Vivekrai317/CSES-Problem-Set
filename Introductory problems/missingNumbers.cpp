#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n-1;i++){
        int input;
        cin>>input;
        v.push_back(input);
    }
    sort(v.begin(),v.end());
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=i+1){
            cout<<i+1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n<<endl;
    }
return 0;
