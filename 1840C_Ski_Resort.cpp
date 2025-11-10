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
        int n,a,m;cin>>n>>a>>m;
        int result=0;
        int b=0;
        int c=0;
        int d=0;
        int e=0;
        vector<int> v(n);
        for(auto &x:v){
            cin>>x;
            if(x<=m){
                b++;
                d=1;
                if(b>=a){
                    c++;
                }
            }
            else{
                b=0;
                result+=(c*(c+1))/2;
                d=0;
                c=0;
            }
        }
        if(b>=a and d==1){
            // cout<<c<<" ";
            result+=(c*(c+1))/2;
        }
        cout<<result<<"\n";
    }
    return 0;
}