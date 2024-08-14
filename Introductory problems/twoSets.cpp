#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>first;
    vector<long long>second;
    int flag=0;
    if(n*(n+1)%4!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        while(n!=0){
            if(flag==0){
                if(n!=0){
                    first.push_back(n);
                    n--;
                }
                else{
                    break;
                }
                if(n!=0){
                    second.push_back(n);
                    n--;
                }
                else{
                    break;
                }
                flag=1;
            }
            else{
                if(n!=0){
                    second.push_back(n);
                    n--;
                }
                else{
                    break;
                }
                if(n!=0){
                    first.push_back(n);
                    n--;
                }
                else{
                    break;
                }
                flag=0;
            }
        }
        cout<<first.size()<<endl;
        for(int i=0;i<first.size();i++){
            cout<<first[i]<<" ";
        }
        cout<<endl;
        cout<<second.size()<<endl;
        for(int i=0;i<second.size();i++){
            cout<<second[i]<<" ";
        }
    }
    return 0;
}