#include <iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 int count=0;
 int maxCount=0;
 for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
        count++;
        maxCount=max(maxCount,count);
    }
    else{
        count=0;
    }
 }
 cout<<maxCount+1<<endl;
return 0;
