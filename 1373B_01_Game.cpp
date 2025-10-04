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
        int a=0;
        for(int x=1;x<s.length();x++){
            if(s[x]!=s[x-1]){
                a++;
                s.erase(x-1,2);
                if(x>3){
                    x-=4;
                }
                else{
                    x=0;
                }
            }
        }
        if(a%2==1){cout<<"DA\n";}
        else{cout<<"NET\n";}
    }
    return 0;
}