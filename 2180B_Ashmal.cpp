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
        string s="";
        int e=0;
        for(int x=0;x<n;x++){
            string a;cin>>a;
            if(s+a<a+s){
                s+=a;
            }
            else{
                a+=s;
                s=a;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}