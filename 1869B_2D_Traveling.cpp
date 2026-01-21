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
        int n,k,a,b;cin>>n>>k>>a>>b;
        vector<pair<int,int>>v(n);
        for(int x=0;x<n;x++){
            cin>>v[x].first>>v[x].second;
        }
        int e=0,f=0;
        if(a<=k){
            e=1;
        }
        if(b<=k){
            f=1;
        }
        if(e==1 and f==1){
            cout<<0<<endl;
            continue;
        }
        int m=abs(v[a-1].first-v[b-1].first)+abs(v[a-1].second-v[b-1].second);
        int g=999999999999;
        int h=999999999999;
        for(int x=0;x<k;x++){
            if((abs(v[a-1].first-v[x].first)+abs(v[a-1].second-v[x].second))<g){
                g=(abs(v[a-1].first-v[x].first)+abs(v[a-1].second-v[x].second));
            }
            if((abs(v[b-1].first-v[x].first)+abs(v[b-1].second-v[x].second))<h){
                h=(abs(v[b-1].first-v[x].first)+abs(v[b-1].second-v[x].second));
            }
        }
        cout<<min((g+h),m)<<endl;
    }
    return 0;
}