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
        int n,m;cin>>n>>m;
        int a=1000;
        int c;
        int r=0;
        int e=0;
        for(int x=0;x<n*m;x++){
            cin>>c;
            if(abs(c)<a){
                a=abs(c);
            }
            if(c==0){e=-1;}
            if(c<0 and e!=-1){e++;}
            r+=abs(c);
        }
        if(e==-1 or e%2==0){cout<<r<<endl;}
        else{
            cout<<r-(a*2)<<endl;
        }
    }
    return 0;
}