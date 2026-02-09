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
        vector<int>a;
        vector<int>b;
        int e=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(x!=0 and v[x]==v[x-1]){
                e=1;
            }
            if(x%2==0){
                a.push_back(v[x]);
            }
            else{
                b.push_back(v[x]);
            }
        }
        if(e){
            cout<<0<<endl;
            continue;
        }
        int a1=b[0];
        for(auto x:b){
            a1=__gcd(a1,x);
        }
        for(auto x:a){
            if(x%a1==0){
                e=1;
            }
        }
        if(e){
            e=0;
            int b1=a[0];
            for(auto x:a){
                b1=__gcd(b1,x);
                if(b1==0){
                    break;
                }
            }
            for(auto x:b){
                if(x%b1==0){
                    e=1;
                    break;
                }
            }
            if(e){
                cout<<0<<endl;
            }
            else{
                cout<<b1<<endl;
            }
        }
        else{
            cout<<a1<<endl;
        }
    }
    return 0;
}