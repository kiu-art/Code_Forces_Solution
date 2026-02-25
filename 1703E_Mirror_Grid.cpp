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
        vector<vector<int>>v(n,vector<int>(n));
        for(int x=0;x<n;x++){
            string s;cin>>s;
            for(int y=0;y<n;y++){
                if(s[y]=='0'){
                    v[x][y]=0;
                }
                else{
                    v[x][y]=1;
                }
            }
        }
        // cout<<"sas"<<endl;
        int r=0;
        for(int x=0;x<(n/2);x++){
            for(int y=0;y<(n/2);y++){
                int a=v[x][y]+v[n-1-x][n-1-y]+v[y][n-1-x]+v[n-1-y][x];
                r+=min(a,4-a);
            }
        }
        if((n/2)*2!=n){
            int y=n/2;
            for(int x=0;x<n/2;x++){
                int a=v[x][y]+v[n-1-x][n-1-y]+v[y][n-1-x]+v[n-1-y][x];
                // cout<<a;
                r+=min(a,4-a);
            }
        }
        cout<<r<<endl;
    }
    return 0;
}