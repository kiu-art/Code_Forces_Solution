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
        int n,b;cin>>n>>b;
        vector<pair<int,int>>v(n);
        for(auto &x:v){
            cin>>x.first;
        }
        for(auto &x:v){
            cin>>x.second;
        }
        sort(v.begin(),v.end(),[](
            const pair<int,int> &a,
            const pair<int,int> &b){
            return a.second<b.second;
        });
        n--;
        int res=b;
        for(auto x:v){
            if(n<=0 or x.second>b){
                break;
            }
            // cout<<n<<" "<<x.first<<" "<<x.second<<"   ";
            if(x.second<b){
                res+=((bool((n-x.first)>=0)*x.second)*x.first)+((bool((n-x.first)<0)*x.second)*n);
                n-=x.first;
            }
            else{
                break;
            }
        }
        cout<<res+(bool(n>0)*n*b)<<"\n";
    }
    return 0;
}