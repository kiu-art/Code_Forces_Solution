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
        int n,k;cin>>n>>k;
        int res=k;
        int a=0;
        int e=0;
        int f=0;
        if(k==4){
            for(int x=0;x<n;x++){
                cin>>a;
                if(a%4==0 and e==0){
                    cout<<"0\n";
                    e=1;
                }
                else if(k-(a%4)<res){
                    res=k-(a%4);
                }
                if(a%2==0){
                    f++;
                }
            }
            if(e==0){
                if(f>1){
                    cout<<"0\n";
                }
                else if(f==1){
                    cout<<"1\n";
                }
                else{
                    if(res==1){cout<<1<<endl;}
                    else if(res==3){cout<<2<<endl;}
                }
            }
        }
        else{
            res=k;
            for(int x=0;x<n;x++){
                cin>>a;
                if(e==0 and a%k==0){res=0;e=1;}
                if(e==0 and k-(a%k)<res){
                    res=k-(a%k);
                }
            }
        cout<<res<<endl;
        }
    }
    return 0;
}