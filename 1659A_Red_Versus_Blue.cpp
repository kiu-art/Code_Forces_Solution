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
        int n,r,b;cin>>n>>r>>b;
        int a=r/(b+1);
        int i=r%(b+1);
        int c=0;
        int e=0;
        int f=0;
        for(int x=0;e!=b;x++){
            if(c==a){
                if(i!=0){
                    cout<<"R";
                    i--;
                    f++;
                }
                cout<<"B";
                c=0;
                e++;
            }
            else{
                c++;
                cout<<"R";
            }
            f++;
        }
        for(int x=0;x<n-f;x++){
            cout<<"R";
        }
        cout<<endl;
    }
    return 0;
}