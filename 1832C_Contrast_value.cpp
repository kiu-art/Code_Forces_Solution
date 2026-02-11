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
        int n;cin>>n;;
        vector<int>v(n);
        int a=0;
        int c=1;
        int b=0;
        int d=1;
        int e=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(x){
                b=abs(v[x]-v[x-1]);
                a+=b;
                if((v[x]-v[x-1])*c<0 or x==1 or e==0){
                    if(v[x]-v[x-1]!=0){
                        d++;
                    }
                    if((v[x]-v[x-1])<0){
                        c=-1;
                    }
                    else if((v[x]-v[x-1])==0){
                        continue;
                    }
                    else{
                        c=1;
                    }
                    e=1;
                }
            }
        }
        // if(u==89){
        //     for(auto x:v){
        //         cout<<x;
        //     }
        // }
        if(a==0){
            cout<<1<<endl;
            continue;
        }
        else if(a==abs(v[0]-v[n-1])){
            cout<<2<<endl;
            continue;
        }
        else{
            cout<<d<<endl;
        }
    }
    return 0;
}