#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long k=1;
    while(k<=n){
        if(k==1){
            cout<<0<<endl;
        }
        else{
            cout<< ((k*k)*(k*k-1)/2)-(4*(k-1)*(k-2))<<endl;
        }
        k++;
    }
    return 0;
}