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
        vector<int>v(q);
        for(int x=0;x<q;x++){
            cin>>v[x];
        }
        sort(v.begin(),v.end());
        vector<int>v1(q);
        for(int x=0;x<q;x++){
            if(x==q-1){
                v1[x]=n-v[x]+v[0]-1;
                break;
            }
            v1[x]=v[x+1]-v[x]-1;
        }
        sort(v1.rbegin(),v1.rend());
        // for(auto x:v1){cout<<x<<" ";}
        int r=0;
        int a=1;
        for(int x=0;x<q;x++){
            if(v1[x]-a<0){
                break;
            }
            if(v1[x]-a==0){r+=1; break;}
            r+=v1[x]-a;
            a+=4;
        }
        cout<<n-r<<endl;
    }
    return 0;
}