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
        int n,m;cin>>n>>m;
        vector<int>v(m,0);
        for(int x=0;x<n;x++){
            int a;cin>>a;
            v[a%m]++;
        }
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        int r=0;
        if(v[0]!=0){
            r++;
        }
        for(int x=1;x<m/2+1;x++){
            if(v[x]==0 and v[m-x]==0){
            }
            else if(v[x]==0){
                r+=v[m-x];
            }
            else if(v[m-x]==0){
                r+=v[x];
            }
            else{
                r++;
                int a=min(v[x],v[m-x]);
                int b=max(v[x],v[m-x]);
                r+=(b-(a+1))*bool(b-(a+1)>0);
            }
        }
        cout<<r<<endl;
    }
    return 0;
}