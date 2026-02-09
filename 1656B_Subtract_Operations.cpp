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
        vector<int>v(n);
        set<int>s;
        for(int x=0;x<n;x++){
            cin>>v[x];
            s.insert(v[x]-k);
        }
        int a=s.size();
        int e=0;
        for(int x=0;x<n;x++){
            if(s.find(v[x])!=s.end()){
                e=1;
                break;
            }
        }
        if(e){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}