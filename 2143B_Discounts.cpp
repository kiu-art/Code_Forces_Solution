#include <iostream> 
#include <vector>   
#include <algorithm> 
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
        int n,m;cin>>n>>m;
        vector<int> p(n);
        vector<int> d(m);
        int sum=0;
        for(auto &x:p){cin>>x;sum+=x;}
        for(auto &x:d){cin>>x;}
        sort(p.begin(),p.end());
        sort(d.begin(),d.end());
        int e=n;
        for(auto x:d){
            while(x--){
                e--;
            }
            if(e<0){
                break;
            }
            sum-=p[e];
        }
        cout<<sum<<"\n";
    }
    return 0;
}