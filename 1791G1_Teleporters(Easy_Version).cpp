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
        int a=1;
        for(auto &x:v){
            cin>>x;
            x+=a;
            a++;
        }
        sort(v.begin(),v.end());
        int r=0;
        for(int x=1;x<=n;x++){
            r++;
            k-=v[x-1];
            if(k<0){
                r--;
                break;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}