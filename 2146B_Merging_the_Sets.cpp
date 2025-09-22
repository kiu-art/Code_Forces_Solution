#include <bits/stdc++.h> 
#include <vector>   
#include <algorithm> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
bool (list<int>a,list<int>b,int n){
    for(int x=1;x<=n;x++){
        for(int y=0;y<n;y++){
            if(a[y]!=x and b[y]!=x){
                return 0;
            }
        }
    }
    return 1;
}

signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        map<int,list<int>> v;
        int a=0;
        int b;
        int c=0;
        int d=0;
        int e=0;
        for(int x=0;x<n;x++){
            cin>>a;
            list<int>l;
            for(int y=0;y<a;y++){
                cin>>b;
                l.push_back(b);
            }
            v[x]=l;
            if(a==m){
                c++;
            }
        }
        for(auto x:v){
            
        }
        if(c!=0 and n>2){
            cout<<"YES\n";
            continue;
        }
        else if(c==2 and n==2){
            cout<<"YES\n";
            continue;
        }
        for(int x=0;x<n;x++){
            
        }
        
    }
    return 0;
}