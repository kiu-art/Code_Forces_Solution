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
        int r=0;
        int a=0;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(int x=0;x<n;x++){
            if(x!=0 and x!=n-1 and s[x]=='0' and s[x-1]=='0' and s[x+1]=='0'){
                if(x!=1 and x!=n-2 and s[x+2]=='0'){
                    s[x+1]='1';
                    x++;
                }
                else{
                    s[x]='1';
                }
                r++;
            }
            else if(s[x]=='0' and s[x+1]=='0' and x==0){
                if(s[x+2]=='0'){
                    s[x+1]='1';
                    x++;
                }
                else{
                    s[x]='1';
                }
                r++;
            }
            else if(x==n-1 and s[x-1]=='0'){
                r++;
                s[x]='1';
            }
            else if(s[x]=='1'){
                r++;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}