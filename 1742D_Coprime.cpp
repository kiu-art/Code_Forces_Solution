#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

vector<vector<int>>p(1001,vector<int>(1001));
void sieve(){
    for(int x=0;x<1001;x++){
        for(int y=0;y<1001;y++){
            p[x][y]=bool(__gcd(x,y)==1);
        }
    }
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    sieve();
    while(t--){
        int n;cin>>n;
        vector<int>v(1001,0);
        int b;
        for(int x=1;x<=n;x++){
            cin>>b;
            v[b]=x;
        }
        int r=0;
        for(int x=1;x<=1000;x++){
            if(v[x]==0){
                continue;
            }
            for(int y=1;y<=1000;y++){
                if(v[y]==0){continue;}
                if(p[x][y]==1){
                    int a=v[x]+v[y];
                    // cout<<x<<" "<<y<<endl;
                    if(a>r){
                        r=a;
                    }
                }
            }
        }
        if(r==0){cout<<-1<<endl;continue;}
        cout<<r<<endl;
    }
    return 0;
}