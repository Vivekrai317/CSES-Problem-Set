#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    char ch;
    int odd;
    string res="";
    for(auto x : m){
        if(x.second%2!=0){
            odd++;
            ch=x.first;
        }
    }
    if(s.length()%2==0 && odd>0){
        cout<<"NO SOLUTION";
    }
    else if(s.length()%2!=0 && odd>1){
        cout<<"NO SOLUTION";
    }
    else{
        for(auto x : m){
                for(int i=0;i<x.second/2;i++){
                    res+=x.first;
                }
            }
        cout<<res;
        if(s.length()%2!=0){
            cout<<ch;
        }
        reverse(res.begin(),res.end());
        cout<<res;
    }
    return 0;
}