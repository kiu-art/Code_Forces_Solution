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
        vector<int>v(n);
        vector<int>v2(n-1);
        int s=0;
        int e=0;
        int f=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(x==0){
                continue;
            }
            if(x==n-1){
                continue;
            }
            if(v[x]==-1){
                v[x]=0;
            }
        }
        if(v[0]==-1 and v[n-1]!=-1){
            v[0]=v[n-1];
        }
        if(v[n-1]==-1 and v[0]!=-1){
            v[n-1]=v[0];
        }
        if(v[n-1]==-1 and v[0]==-1){
            v[0]=0;
            v[n-1]=0;
        }
        cout<<abs(v[n-1]-v[0])<<endl;
        int b=-1;
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}