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
        int n,a;cin>>n>>a;
        string s;cin>>s;
        int c=count(s.begin(),s.begin()+a,'W');
        set<int> v;
        v.insert(c);
        for(int x=a;x<n;x++){
            char b=s[x];
            if(s[x-a]=='W'){
                c--;
            }
            if(b=='W'){
                c++;
            }
            v.insert(c);
        }
        cout<<*v.begin()<<endl;
    }
    return 0;
}