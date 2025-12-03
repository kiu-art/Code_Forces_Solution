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
        string s="";
        int r=0;
        vector<pair<int,pair<int,int>>>v1(n);
        for(int x=0;x<n;x++){
            cin>>v1[x].first;
            v1[x].second.first=x;
        }
        sort(v1.begin(),v1.end());
        int e=-(n/2);
        for(int x=1;x<n;x+=2){
            v1[x].second.second=e;
            r+=abs(v1[x].first*e);
            e++;
        }
        int a;
        if(n%2==0){a=n-2;}
        else{a=n-1;}
        // cout<<e<<endl;
        for(int x=a;x>=0;x-=2){
            e++;
            v1[x].second.second=e;
            r+=abs(v1[x].first*e);
        }
        sort(v1.begin(),v1.end(),[](
            const auto i,
            const auto j){
                return i.second.first<j.second.first;
            }
        );
        cout<<r*2<<endl<<0<<" ";
        for(auto x:v1){
            cout<<x.second.second<<" ";
        }
        cout<<endl;
    }
    return 0;
}