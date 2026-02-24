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
        string s;cin>>s;
        vector<int>v(n+1);
        for(int x=1;x<=n;x++){
            if(s[x-1]=='1'){
                v[x]=1;
            }
            else{
                v[x]=-1;
            }
        }
        int r=0;
        for(int x=1;x<=n;x++){
            if(v[x]==-1  or v[x]==0){
                for(int y=x;y<=n;y+=x){
                    if(v[y]==-1){
                        r+=x;
                        v[y]=0;
                    }
                    else if(v[y]==1){
                        break;
                    }
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}