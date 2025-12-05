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
        for(auto &x:v){
            cin>>x.first;
            // x.first=-x.first;
        }
        for(auto &x:v){
            cin>>x.second;
            // x.second=-x.second;
        }
        int r=0;
        int f=0;
        int a,b,c,d,i,j;
        for(auto x:v){
            a=x.first;
            b=x.second;
            c=r-x.first;
            i=f-x.first;
            d=x.second-r;
            j=x.second-f;
            r=max(c,max(i,max(d,j)));
            f=min(i,min(i,min(d,j)));
            // if(d>r){r=d;}
        }
        // if(i>r){cout<<i<<endl;continue;}
        cout<<r<<endl;
    }
    return 0;
}