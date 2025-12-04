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
        string a,b;cin>>a>>b;
        string c=b;
        if(a.length()>b.length()){b=a;a=c;}
        int r=0;
        for(int x=0;x<a.length();x++){
            for(int y=1;y<a.length()-x+1;y++){
                string i=a.substr(x,y);
                int u=i.length();
                if(b.find(i)!=string::npos){
                    r=max(r,u);
                }
                // cout<<i<<endl;
            }
        }
        cout<<(a.length()+b.length())-(2*r)<<endl;
    }
    return 0;
}