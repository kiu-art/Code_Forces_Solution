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
        int n;char c;cin>>n>>c;
        string s;cin>>s;
        if(c=='g'){cout<<0<<endl;continue;}
        int r=0;
        int b=0;
        int d=0;
        int e=0;
        for(auto a:s){
            if(a=='g' and b!=0){
                if(b>d){
                    d=b;
                }
                b=0;
            }
            if(a==c or b!=0){
                b++;
            }
            if(a=='g'){e=1;}
            if(a!='g' and e==0){
                r++;
            }
        }
        if(b+r>d and b!=0){
            d=b+r;
        }
        cout<<d<<endl;
    }
    return 0;
}