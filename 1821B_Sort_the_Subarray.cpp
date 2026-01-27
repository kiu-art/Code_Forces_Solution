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
        vector<int>v1(n);
        vector<int>v2(n);
        for(int x=0;x<n;x++){
            cin>>v1[x];
        }
        int r,res=0;
        int a,b,e=0;
        int c=9999999999999999;
        int d=0;
        for(int x=0;x<n;x++){
            cin>>v2[x];
            if(v1[x]!=v2[x] and e==0){
                a=x;
                e=1;
                if(v1[x]<c){
                    c=v1[x];
                }
                if(v1[x]>d){
                    d=v1[x];
                }
            }
            else if(v1[x]!=v2[x]){
                b=x;
                if(v1[x]<c){
                    c=v1[x];
                }
                if(v1[x]>d){
                    d=v1[x];
                }
            }
        }
        e=0;
        for(int x=a-1;x>=0;x--){
            if(v1[x]>c){
                a=x+1;
                e=1;
                break;
            }
            else{
                c=v1[x];
            }
        }
        if(e==0){a=0;}
        e=0;
        for(int x=b+1;x<n;x++){
            if(v1[x]<d){
                b=x-1;
                e=1;
                break;
            }
            else{
                d=v1[x];
            }
        }
        if(e==0){b=n-1;}
        cout<<a+1<<" "<<b+1<<endl;
        // cout<<" "<<c<<" "<<d<<endl;
    }
    return 0;
}