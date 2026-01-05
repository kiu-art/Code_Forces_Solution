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
        string s;cin>>s;
        int n=s.length();
        if(count(s.begin(),s.end(),'s')==0 and count(s.begin(),s.end(),'s')==n){
            cout<<"0"<<endl;
        }
        int r=0;
        int a=0;
        for(int x=0;x<n;x++){
            if(x==0 and s[x]=='u'){
                r++;
            }
            else if(x==n-1 and s[x]=='u'){
                r++;
            }
            else if(s[x]=='u'){
                if(a==1){
                    r++;
                    a=0;
                }
                else{
                    a=1;
                }
            }
            else{
                a=0;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}