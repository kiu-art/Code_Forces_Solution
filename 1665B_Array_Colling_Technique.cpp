#include <bits/stdc++.h> 
using namespace std; 
#define int long long
#include<cmath>

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
        map<int,int> m;
        int a;
        for(int x=0;x<n;x++){
            cin>>a;
            m.insert({a,0});
            m[a]++;
        }
        int b=0;
        for(auto x:m){
            b=max(x.second,b);
        }
        if(b==n){
            cout<<"0\n";
            continue;
        }
        a=b;
        int d=0;
        int c=b;
        for(int x=1;x<1000;x++){
            if(c>=n-b){
                d=x;
                break;
            }
            a=a*2;
            c+=a;
        }
        cout<<n-b+d<<"\n";
    }
    return 0;
}