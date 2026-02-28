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
        vector<int>v1(n);
        int i,j;cin>>i>>j;
        for(int x=0;x<n;x++){
            cin>>v1[x];
        }
        vector<int>v2(v1.begin()+i,v1.begin()+j);
        v1.erase(v1.begin()+i,v1.begin()+(j));
        int o=1e10;
        int c=0;
        int f=0;
        for(auto x:v2){
            if(x<o){
                o=x;
                f=c;
            }
            c++;
        }
        int e=0;
        rotate(v2.begin(),v2.begin()+f,v2.end());
        vector<int>b1(v2.size());
        b1=v2;
        // if(v2.size()!=0){
        //     for(int x=0;x<2*v2.size();x++){
        //         if(v2[x]==o){
        //             e=1;
        //         }
        //         if(c==v2.size()){break;}
        //         if(e==1){
        //             b1.push_back(v2[x%v2.size()]);
        //             c++;
        //         }
        //     }
        // }
        e=0;
        for(auto x:v1){
            if(o<x and e==0){
                for(auto y:b1){
                    cout<<y<<" ";
                }
                e=1;
            }
            cout<<x<<" ";
        }
        if(e==0){
            for(auto y:b1){
                cout<<y<<" ";
            }
        }
        cout<<endl;
        // for(auto x:v1){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // for(auto x:b1){
        //     cout<<x<<" "; 
        // }
        // cout<<endl;
    }
    return 0;
}