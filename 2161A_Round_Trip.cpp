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
        int a,b,c,n;cin>>a>>b>>c>>n;
        int res=0;
        for(int x=0;x<n;x++){
            char d;
            cin>>d;
            if(d=='1'){
                a-=c;
                res++;
            }
            else{
                if(a<b){
                    res++;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}