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
        int a=0;
        int b=0;
        for(auto &x:v){
            cin>>x;
            if(x==0){
                a++;
            }
            if(x==1){
                b++;
            }
        }
        if(b==0){cout<<0<<"\n";continue;}
        if(a==0){cout<<b<<"\n";continue;}
        int res=pow(2,a);
        cout<<(res*b)<<endl;
    }
    return 0;
}