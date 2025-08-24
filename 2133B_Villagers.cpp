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
    for(int u=0;u<t;u++){
        int n;cin>>n;
        vector<int>v(n);
        for(auto &x:v){cin>>x;}
        sort(v.begin(),v.end());
        int a,b;
        int result=0;
        if(n%2==0){
        for(int x=0;x<n;x+=2){
            result+=v[x+1];
        }}
        else{
            for(int x=0;x<n-1;x++){
            result+=v[x+1];
            x++;
        }
        result+=v[n-1];
        }
        cout<<result<<"\n";
    }
    return 0;
}