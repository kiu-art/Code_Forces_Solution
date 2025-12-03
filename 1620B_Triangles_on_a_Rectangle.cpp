#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int area(int b,int a){
    int i=0;int j=9999999;int r;
    for(int x=0;x<b;x++){
        cin>>r;
        if(r>i){
            i=r;
        }
        if(r<j){
            j=r;
        }
    }
    return abs(i-j)*a;
}
signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int w,h;cin>>w>>h;
        int m;
        int n;
        int result=0;
        for(int x=0;x<2;x++){
            cin>>n;
            m=area(n,h);
            if(m>result){
                result=m;
            }
        }
        for(int x=0;x<2;x++){
            cin>>n;
            m=area(n,w);
            if(m>result){
                result=m;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}