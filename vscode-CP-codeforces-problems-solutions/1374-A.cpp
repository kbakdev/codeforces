#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        long long ans = (n/x)*x + y;
        if(ans>n){
            ans = ans - x;
        }
        cout<<ans<<endl;
    }
    return 0;
}