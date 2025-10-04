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
        int a=0;
        if(n%3!=0 and n!=1){
            cout<<"-1\n";
            continue;
        }
        while(n>=2){
            if(n%3!=0){
                cout<<"-1\n";
                a=-1;
                break;
            }
            if(n%6==0){
                n/=6;
                a++;
            }
            else{n*=2;a++;}
        }
        if(a!=-1){
            cout<<a<<"\n";
        }
    }
    return 0;
}