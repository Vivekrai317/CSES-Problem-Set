#include <iostream>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        long long ans=0;
        if(x>=y){
            if(x%2==0){
                ans= (x-1)*(x-1) + y;
            }
            else{
                ans=x*x + 1 - y;
            }
        }
        else{
            if(y%2==0){
                ans=y*y +1 -x;
            }
            else{
                ans=(y-1)*(y-1)+x;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}