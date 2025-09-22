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
        vector<int> v(n);
        int a;
        for(auto &x:v){
            cin>>x;
        }
        if(n==1){
            cout<<"0\n";
            continue;
        }
        if((v[n-1]==1 and n>=3)){
            cout<<"-1\n";
            continue;
        }
        int b=INT32_MAX;
        int result=0;
        int e=0;
        for(int x=n-1;x>=0;x--){
            if(v[x]==0 and x!=0){
                cout<<"-1\n";
                e=1;
                break;
            }
            if(v[x]>=b){
                v[x]=v[x]/2;
                x++;
                result++;
            }
            b=v[x];
        }
        if(e==1){continue;}
        cout<<result<<"\n";
    }
    return 0;
}