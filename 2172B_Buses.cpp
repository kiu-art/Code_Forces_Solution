#include <bits/stdc++.h> 
using namespace std; 
#define int double

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

signed main() {
    fast_io(); 
    int n,m,l;double bs,ps;cin>>n>>m>>l>>bs>>ps;
    vector<pair<int,int>> v(n);
    vector<int> p(m);
    for(int x=0;x<n;x++){
        cin>>v[x].first>>v[x].second;
    }
    for(auto &x:p){
        cin>>x;
    }
    sort(v.begin(),v.end());
    for(auto x:p){
        int t=0;
        int a=-1;
        int b=x;
        double c=0;
        int d=0;
        double e=0;
        for(auto y:v){
            if(y.first<=x){
                a=y.first;
                c=(y.second-y.first)/bs;
                if(b<=y.second){
                    if(e+(y.second-b)/ps>=c){
                        e=c;
                        b=y.second;
                        d=1;
                    }
                }
            }
            else{break;}
        }
        if(d==0){
            cout<<(l-x)/ps<<endl;
        }
        else{
            cout<<e+((l-b)/ps)<<endl;
        }
    }
    return 0;
}