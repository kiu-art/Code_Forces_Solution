#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int res=0;
        int y;
        int a=n/2;
        int b=(n*k)-((a*k)+k);
        // cout<<b<<"   "<<a<<"   ";
        for(int x=0;x<n*k;x++){
            cin>>y;
            if(x==b){
                res+=y;
                // cout<<y<<" ";
                b+=a+1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}