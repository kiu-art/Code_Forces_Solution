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
        int a;cin>>a;
        vector<int>v(n);
        for(auto &x:v){cin>>x;}
        sort(v.begin(),v.end());
        int b=v[n-1];
        int r=0;
        int e=0;
        for(int x=0;x<n;x++){
            r+=b-v[x];
            if(b==v[x]){
                e++;
            }
        }
        if(r-n+e>a){
            cout<<0<<endl;
        }
        else{
            int c=a-(r-n+e);
            // cout<<c;
            if(c>n-e){
                int f=1;
                for(int x=1;x<=n;x++){
                    f=(f*x)%998244353;
                }
                cout<<f<<endl;
            }
            else{
                int g=n-e;
                int f=1;
                for(int x=c+1;x<=g;x++){
                    f=(f*x)%998244353;
                }
                for(int x=1;x<=e+c;x++){
                    f=(f*x)%998244353;
                }
                cout<<f<<endl;
            }
        }
    }
    return 0;
}