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
        string s;cin>>s;
        int a=0;
        int b=-1;
        int c=0;
        for(int x=0;x<n;x++){
            if(s[x]=='1'){
                if(b==-1){
                    b=a;
                }
                if(a>c){
                    c=a;
                }
                a=0;
            }
            else{
                a++;
            }
        }
        c=max(c,a+b);
        cout<<c<<endl;
    }
    return 0;
}
