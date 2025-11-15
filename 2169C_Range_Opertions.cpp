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
        vector<int> v(n);
        int a;
        int b=0;
        int c=1;
        int d=0;
        int e=1;
        int f=0;
        int g=0;
        for(int x=1;x<=n;x++){
            cin>>a;
            d+=a;
            if(x*n<b+a){
                if(n*(c-e)-d>f or g==0){
                    f=n*(c-e)-d;
                    e=c;
                    c=x;
                    g=1;
                }
                d=0;
            }
            b+=a;
        }
        if(g==1){
            cout<<b+f<<endl;continue;
        }
        cout<<1<<" "<<c<<" "<<e<<endl;
    }
    return 0;
}