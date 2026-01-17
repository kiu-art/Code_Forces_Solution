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
        int a=-99999999999999;
        int b=99999999999999;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]>a){
                a=v[x];
            }
            if(v[x]<b){
                b=v[x];
            }
        }
        int r=abs(a-b);
        int f;
        // sort(v.begin(),v.end());
        for(int x=2;x<n;x++){
            if(n%x==0){
                // cout<<x<<"  ";
                a=0;
                int c=0;
                int d=999999999999999;
                int f=0;
                for(int y=0;y<n;y++){
                    a+=v[y];
                    if((y+1)%x==0){
                        c=max(a,c);
                        d=min(a,d);
                        a=0;
                    }
                }
                if(r<abs(d-c)){
                    r=abs(d-c);
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}