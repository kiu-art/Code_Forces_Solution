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
        int n,q;cin>>n>>q;
        vector<int>v1(n);
        vector<int>v2(n);
        for(int x=0;x<n;x++){
            cin>>v1[x];
        }
        for(int x=0;x<n;x++){
            cin>>v2[x];
        }
        vector<int>r(n+1,0);
        int a=0;
        int b=0;
        for(int x=n-1;x>=0;x--){
            a=max(v1[x],max(v2[x],a));
            r[x]=a+b;
            b=r[x];
        }
        // for(auto x:r){
        //     cout<<x<<" ";
        // }
        int l,f;
        for(int x=0;x<q;x++){
            cin>>l>>f;l--;f--;
            cout<<r[l]-r[f+1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}