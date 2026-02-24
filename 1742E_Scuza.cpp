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
        int n,q;cin>>n>>q;
        vector<pair<int,int>>v(n);
        int b=0;
        int c=0;
        for(int x=0;x<n;x++){
            int a;cin>>a;
            if(c<a){c=a;}
            b+=a;
            v[x].first=c;
            v[x].second=b;
        }
        for(int p=0;p<q;p++){
            int a;cin>>a;
            int i=0;
            int j=n-1;
            int h=-1;
            while(i<=j){
                int k=(i+j)/2;
                if(v[k].first<=a){
                    i=k+1;
                    h=k;
                }
                else{
                    j=k-1;
                }
            }
            if(h==-1){cout<<0<<" ";continue;}
            cout<<v[h].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}