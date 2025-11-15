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
        if(n%2==0){cout<<n/2<<" "<<n/2<<endl;continue;}
        int e=1;
        for(int x=1;x*x<=n;x++){
            if(n%x==0){
                if(x<n){e=max(e,x);}
                if((n/x)<n){e=max(n/x,e);}
            }
        }
        cout<<e<<" "<<n-e<<endl;
    }
    return 0;
}