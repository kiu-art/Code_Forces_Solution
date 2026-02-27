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
        int n;char c;cin>>n>>c;
        string s;cin>>s;
        int b=-1;
        int r=0;
        for(int x=1;x<=n;x++){
            int e=0;
            for(int y=x;y<=n;y+=x){
                if(s[y-1]!=c){
                    e=1;
                    r++;
                    break;
                }
            }
            if(e==0){
                b=x;
                break;
            }
        }
        if(r==0){cout<<0<<endl;}
        else if(b!=-1){cout<<1<<endl<<b<<endl;}
        else{
            cout<<2<<endl<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}