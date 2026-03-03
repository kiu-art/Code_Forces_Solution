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
        vector<pair<int,int>>v(n);
        for(int x=0;x<n;x++){
            int a;cin>>a;
            v[x].first=a;
            v[x].second=x+1;
        }
        sort(v.begin(),v.end());
        pair<int,int> a=v[0];
        pair<int,int> b=v[n-1];
        if(a.first==b.first){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;
        }
        for(int x=1;x<n;x++){
            if(v[x].first!=a.first){
                cout<<a.second<<" "<<v[x].second<<endl;
            }
            else{
                cout<<b.second<<" "<<v[x].second<<endl;
            }
        }
    }
    return 0;
}