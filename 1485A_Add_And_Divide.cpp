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
        int a,b;cin>>a>>b;
        int r=a;
        int f=0;
        if(b==1){b++;f=1;}
        for(int x=b;x<b+64;x++){
            int e=1+(x-b);
            int m=a;
            while(m/x){
                e++;
                m/=x;
            }
            r=min(r,e);
        }
        cout<<r+f<<endl;
    }
    return 0;
}