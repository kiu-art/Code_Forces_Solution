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
        int m=(n*(n-1))/2;
        vector<int>v(m);
        map<int,int>a;
        for(int x=0;x<m;x++){
            cin>>v[x];
            a[v[x]]++;
        }
        sort(v.begin(),v.end());
        int b=v[0]-1;
        int d=0;
        for(int x=0;x<m;x++){
            if(a[v[x]]>0){
                cout<<v[x]<<" ";
                a[v[x]]-=n-1-d;
                d++;
            }
        }
        cout<<1000000000<<endl;
    }
    return 0;
}