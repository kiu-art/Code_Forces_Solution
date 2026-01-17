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
        int n;cin>>n;
        vector<pair<int,int>> v(n);
        int k=0;
        for(int x=0;x<n;x++){
            cin>>v[x].first;
            v[x].second=x;
            k+=v[x].first;
        }
        vector<int> r(n);
        sort(v.begin(),v.end());
        int f=n-1;
        int e=0;
        for(int x=n-1;x>=0;x--){
            if(x==n-1){
                r[v[x].second]=f;
                k-=v[x].first;
            }
            else if(k>=v[x+1].first){
                r[v[x].second]=f;
                k-=v[x].first;
            }
            else{
                f=x;
                r[v[x].second]=f;
                k-=v[x].first;    
            }
        }
        for(auto x:r){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}