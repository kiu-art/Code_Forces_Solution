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
        int n,k,b,s;cin>>n>>k>>b>>s;
        if(k*b>s){cout<<"-1\n";continue;}
        vector<int>v(n,0);
        v[0]=k*b;
        s-=v[0];
        for(int x=0;x<n;x++){
            if(s-(k-1)>=0){
                v[x]+=k-1;
                s-=k-1;
            }
            else{
                v[x]+=s;
                s=0;
            }
        }
        if(s!=0){cout<<"-1\n";continue;}
        for(auto x:v){cout<<x<<" ";}
        cout<<"\n";
    }
    return 0;
}