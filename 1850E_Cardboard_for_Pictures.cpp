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
        vector<int>v(n);
        int a=0;
        int b=0;
        int j=0;
        for(auto &x:v){
            cin>>x;
            a++;
            b+=x;
            j+=x*x;

        }
        int e=1;
        int l=0;
        int r=sqrt(m);
        int ans;
        int w;
        while(l<=r){
            w=l+(r-l)/2;
            long double c=(long double)n*w*w*4+(long double)b*w*4+j;
            if(c<=m){
                ans=w;
                l=w+1;
            }
            else{
                r=w-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}