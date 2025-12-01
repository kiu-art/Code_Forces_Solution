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
        int a=0;
        int b=1;
        int c=1;
        int e=0;
        string s="";
        for(int x=1;x<=n;x++){
            cin>>a;
            if(x==1){b=a;}
            if(e==1){continue;}
            if(a!=b){
                if(c==x-1){
                    cout<<"-1\n";
                    e=1;
                }
                for(int y=c+1;y<x;y++){
                    s+=to_string(y);
                    s+=" ";
                    // cout<<s<<endl;
                }
                s+=to_string(c);
                s+=" ";
                b=a;
                c=x;
            }
        }
        if(c==n and e==0){
            cout<<"-1\n";
        }
        else if(e==0){
            for(int y=c+1;y<=n;y++){
                s+=to_string(y);
                s+=" ";
            }
            s+=to_string(c);
            cout<<s<<"\n";
        }
    }
    return 0;
}