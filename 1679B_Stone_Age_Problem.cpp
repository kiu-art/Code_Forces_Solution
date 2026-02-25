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
    int n,q;cin>>n>>q;
    vector<pair<int,int>>v(n);
    int r=0;
    for(auto &x:v){
        cin>>x.first;
        r+=x.first;
        x.second=0;
    }
    int d=0;
    int e=-1;
    for(int x=0;x<q;x++){
        int a;cin>>a;
        if(a==1){
            int b,c;cin>>b>>c;
            b--;
            if(v[b].second>e){
                r=r-v[b].first+c;
            }
            else{
                r=r-d+c;
            }
            cout<<r<<endl;
            v[b].first=c;
            v[b].second=x;
        }
        else{
            cin>>d;
            e=x;
            r=n*d;
            cout<<r<<endl;
        }
    }
    return 0;
}