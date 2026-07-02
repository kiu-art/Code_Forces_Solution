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
    int q;cin>>q;
    vector<pair<int,set<int>>>m(3e6);
    set<int>ss;
    int j=0;
    for(int x=0;x<q;x++){
        int i;cin>>i;
        if(i==1){
            int a;cin>>a;
            m[a].second.insert(j);
            m[a].first=1;
            j++;
            ss.insert(a);
        }
        else{
            int a,b;cin>>a>>b;
            auto k=m[a].second;
            m[a].first=-1;
            ss.erase(a);
            ss.insert(a+b);
            if(m[a+b].first==1){
                m[a+b].second.insert(k.begin(),k.end());
            }
            else{
                m[a+b].second=k;
            }
            m[a+b].first=1;
        }
    }
    vector<int>v(j);
    for(auto x:ss){
        for(auto y:m[x].second){
            v[y]=x;
        }
    }
    for(auto y:v){
        cout<<y<<" ";
    }
    return 0;
}
