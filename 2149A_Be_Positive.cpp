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
        int res=0;
        int a=0;
        int b=0;
        int c;
        c=-c;
        for(int x=0;x<n;x++){
            cin>>a;
            if(a<0){
                b++;
            }
            if(a==0){
                res++;
            }
            if(b==2){
                b=0;
            }
            if(a<0 and a>c){
                c=a;
            }
        }
        cout<<res+(b*(abs(c)+1))<<endl;
    }
    return 0;
}