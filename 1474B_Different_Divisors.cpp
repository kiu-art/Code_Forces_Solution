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
        int r=1;
        int e=2;
        int x=n+1;
        while(e){
            int f=sqrt(x);
            for(int y=2;y<=f;y++){
                if(x%y==0){
                    f=-1;
                    break;
                }
            }
            if(f==-1){x++;}
            else{
                r*=x;
                x+=n;
                e--;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}