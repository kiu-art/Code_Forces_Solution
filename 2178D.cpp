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
        vector<pair<int,pair<int,int>>>v(n);
        for(int x=0;x<n;x++){
            v[x].first=x+1;
            int a;cin>>a;
            v[x].second.first=a;
            v[x].second.second=a;
        }
        if(n%2==0 and m>n/2){cout<<-1<<endl;}
        if(n%2==1 and m>=n/2){cout<<-1<<endl;}
        sort(v.begin(),v.end(),[](
            auto a,
            auto b){
                return a.second.first>b.second.first;
            }
        )
        for(int x=)
    }
    return 0;
}