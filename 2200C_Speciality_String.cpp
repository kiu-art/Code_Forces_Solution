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
        string b;
        cin>>b;
        string s=b;
        int e=1;
        while(e){
            e=0;
            for(int x=0;x<n-1;x++){
                if(s[x]==s[x+1]){
                    s.erase(x,2);
                    x--;
                    e=1;
                    n-=2;
                    continue;
                }
            }
        }
        if(s.length()==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}