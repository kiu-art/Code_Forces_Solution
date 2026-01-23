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
        int n,i,j;cin>>n>>i>>j;
        string s;cin>>s;
        int a=0;
        for(auto x:s){
            if(x=='4'){
                a++;
            }
        }
        int m=n-a+n;
        if(abs(i)>n or abs(j)>n){
            cout<<"NO"<<endl;
        }
        else if(abs(i)+abs(j)-m<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}