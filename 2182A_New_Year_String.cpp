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
        int a=0;
        string v;cin>>v;
        int e=0;
        for(int x=0;x<n;x++){
            if(x>2 and e==0){
                if(v[x-3]=='2' and v[x-2]=='0' and v[x-1]=='2'){
                    // cout<<"ds";
                    if(v[x]=='5'){
                        a=1;
                    }
                    else if(v[x]=='6'){
                        a=0;
                        e=1;
                    }
                }
            }
        }
        cout<<a<<endl;
    }
    return 0;
}