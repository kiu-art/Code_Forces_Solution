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
        vector<int>v1(n);
        vector<int>v2(n);
        vector<int>vp;
        vector<int>vn;
        int a=0;
        for(int x=0;x<n;x++){
            cin>>v1[x];
        }
        for(int x=0;x<n;x++){
            cin>>v2[x];
            a=v2[x]-v1[x];
            if(a>=0){vp.push_back(a);}
            else{vn.push_back(a);}
        }
        int r=0;
        sort(vp.begin(),vp.end());
        sort(vn.rbegin(),vn.rend());
        int lp=vp.size();
        int ln=vn.size();
        a=0; 
        for(int x=0;x<lp;x++){
            if(a<ln and vp[x]+vn[a]>=0){
                r++;
                a++;
            }
            else if(lp-1-x>0){
                r++;
                x++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}