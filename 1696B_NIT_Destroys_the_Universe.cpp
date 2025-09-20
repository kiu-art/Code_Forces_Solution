#include <iostream> 
#include <vector>   
#include <algorithm> 
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
        int a=0;
        int b=0;
        int c=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]!=0 and a==0){
                a=1;
            }
            else if(v[x]==0 and a==1){
                b=1;
            }
            if(v[x]!=0){
                c+=b;
                b=0;
            }
        }
        if(a==1){
            if(c>=1)
            cout<<2<<"\n";
            else{
                cout<<1<<"\n";
            }
        }
        else{
            cout<<0<<"\n";
        }
    }
    return 0;
}