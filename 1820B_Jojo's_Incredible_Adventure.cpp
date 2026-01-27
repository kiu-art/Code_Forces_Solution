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
        int e=0;
        for(int x=0;x<s.length();x++){
            if(s[x]=='0'){
                e=x;
                break;
            }
        }
        int r=0;
        int a=0;
        rotate(s.begin(),s.begin()+e,s.end());
        for(int x=0;x<s.length();x++){
            if(s[x]=='1'){
                a++;
            }
            else{
                if(a>r){
                    r=a;
                }
                a=0;
            }
        }
        if(a==s.length()){cout<<a*a<<endl;continue;}
        if(a>r){r=a;}
        a=0;
        cout<<(r+1)*(r+1)/4<<endl;
    }
    return 0;
}