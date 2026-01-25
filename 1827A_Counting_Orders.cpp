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
    for(int u=1;u<=t;u++){
        int n;cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(auto &x:a){cin>>x;}
        for(auto &x:b){cin>>x;}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int r=1;
        int c=0;
        int e=0;
        int f=n;
        int d=n-1;
        for(int x=n-1;x>=0;x--){
            c=b[x];
            if(f!=0){
                for(int y=d;y>=0;y--){
                    if(a[y]>c){
                        e++;
                        f=y;
                    }
                    else{
                        d=y;
                        break;
                    }
                }
            }
            // cout<<e<<" ";
            r*=e;
            r%=1000000007;
            e--;
        }
        // if(u==3445){
        //     cout<<n<<"??";
        //     for(auto x:a){
        //         cout<<x<<"/";
        //     }
        //     cout<<"///";
        //     for(auto x:b){
        //         cout<<x<<"/";
        //     }
        // }
        cout<<r<<endl;
    }
    return 0;
}