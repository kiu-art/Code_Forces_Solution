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
        int d=9223372036854775807;
        int e=9223372036854775807;
        int f=9223372036854775807;
        int res=0;
        while(n--){
            int m;cin>>m;
            int a=9223372036854775807;
            int b=9223372036854775807;
            int c;
            while(m--){
                cin>>c;
                if(c<f){
                    f=c;
                }
                if(c<a){
                    b=a;
                    a=c;
                }
                else if(c<b){
                    b=c;
                }
            }
            res+=b;
            if(b<e){d=a;e=b;}
        }
        cout<<res-e+f<<"\n";
    }
    return 0;
}