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
        int a=0;
        for(auto &x:v){
            cin>>x;

            if(x==1){
                a++;
            }
        }
        if(a==0){
            cout<<"NO"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int b=a;
        int e=0;
        for(int x=0;x<n;x++){
            if(v[x]==1){
                continue;
            }
            if(v[x]>b){
                e=1;
                break;
            }
            b+=v[x];
        }
        if(e==1){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}