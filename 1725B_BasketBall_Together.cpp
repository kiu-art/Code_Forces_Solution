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
    int n,d;cin>>n>>d;
    vector<int> v(n);
    for(auto &x:v){cin>>x;}
    sort(v.rbegin(),v.rend());
    int r=0;
    int a;
    int m=n;
    for(int x=0;x<n;x++){
        a=v[x];
        if(a*m>d){
            r++;
            m-=ceil(d/a)+1;
            // cout<<m<<endl;
        }
        else{
            break;
        }
    }
    cout<<r<<endl;
    return 0;
}