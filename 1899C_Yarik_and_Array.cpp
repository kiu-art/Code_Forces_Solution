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
        int a=-9999999999;
        int b=-9999999999;
        int d;
        for(int x=0;x<n;x++){
            int c;cin>>c;
            if(x==0){
                d=c;
                a=c;
                b=c;
                continue;
            }
            if(c<0){
                if(a>b){
                    b=a;
                }
            }
            if(a<0){
                a=0;
            }
            else if(abs(d%2)==abs(c%2)){
                if(a>b){
                    b=a;
                }
                a=0;
                if(c<0){
                    continue;
                }
            }
            a+=c;
            d=c;
        }
        cout<<max(a,b)<<endl;
    }
    return 0;
}
