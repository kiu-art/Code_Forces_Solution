#include <bits/stdc++.h> 
#include <cmath>
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
        int a,b;cin>>a>>b;
        if(a%b!=0 and b%a!=0){cout<<-1<<endl;}
        else if(a==b){cout<<0<<endl;}
        else{
            int c=max(a,b);
            int d=min(a,b);
            int e=c/d;
            int r=0;
            int f=0;
            while(e>1){
                if(e%2!=0){
                    f=1;
                }
                r++;
                e/=2;
            }
            if(f==1){cout<<-1<<endl;}
            else{
                cout<<r/3+bool(r%3)<<endl;
            }
        }
    }
    return 0;
}