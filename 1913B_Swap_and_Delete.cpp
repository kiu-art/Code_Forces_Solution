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
        int n0=count(s.begin(),s.end(),'0');
        int n1=count(s.begin(),s.end(),'1');
        if(n0==n1){
            cout<<"0\n";
            continue;
        }
        int res=0;
        int y=s.length();
        int e=0;
        for(int x=0;x<y;x++){
            if(s[x]=='0'){
                n1--;
                if(n1<0){
                    break;
                }
            }
            else{
                n0--;
                if(n0<0){
                    break;
                }
            }
            e++;
        }
        cout<<y-e<<"\n";
    }
    return 0;
}