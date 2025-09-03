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
        int a;cin>>a;
        vector<int> v(a);
        int b=0;
        int c=0;
        int d=1000000000;
        int e=1;
        for(auto &x:v){cin>>x;if(x<b){c=1;};if(e==0 and abs(x-b)<d){d=abs(x-b);}b=x;e=0;}
        if(c==1){cout<<"0\n";}
        else if(d==0){cout<<"1\n";}
        else{
            cout<<(d/2)+1<<"\n";
        }
    }
    return 0;
}