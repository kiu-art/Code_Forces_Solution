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
        int a=0,b=0;
        for(auto &x:v){
            cin>>x;
        }
        int r=0;
        int e=0;
        sort(v.begin(),v.end());
        for(int x=0;x<n;x++){
            if(v[x]+a<=k){
                a+=v[x];
                r++;
                e=1;
                b=x;
            }
            else{
                break;
            }
        }
        if(e==0){
            cout<<0<<endl;continue;
        }
        int c=1;
        for(int x=b;x>=0;x--){
            int g=(k-a)/(x+1);
            r+=g-c+1;
            a-=v[x];
        }
        cout<<r<<endl;
    }
    return 0;
}