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
        int r=1;
        float e=0.1;
        int a;cin>>a;
        if(n<2){cout<<0<<endl;continue;}
        cin>>a;
        for(int x=2;x<n;x++){
            int b;cin>>b;
            if((b-a)-e>=0){
                r++;
                int c=e;
                e=((b-a)-c)-0.1;
                cout<<e<<" "<<c<<"     ";
            }
            else{
                e=0.1;
            }
            a=b;
        }
        if(n==2){cout<<1<<endl;}
        else{
            cout<<r<<endl;
        }
    }
    return 0;
}