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
        vector<int>v(n);
        for(auto &x:v){cin>>x;}
        if(v[n-2]>v[n-1]){
            cout<<-1<<endl;
            continue;
        }
        if(v[n-1]>=0){
            cout<<n-2<<endl;
            for(int x=0;x<n-2;x++){
                cout<<x+1<<" "<<n-1<<" "<<n<<endl;
            }
        }
        else{
            auto v2=v;
            sort(v.begin(),v.end());
            if(v2==v){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}