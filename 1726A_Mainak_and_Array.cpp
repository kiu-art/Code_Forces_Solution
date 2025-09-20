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
        int b=999;
        int c=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]>a){
                a=v[x];
            }
            if(v[x]<=b){
                b=v[x];
            }
            if(x!=0 and v[x-1]-v[x]>=c){c=v[x-1]-v[x];}
        }
        int e=v[n-1]-v[0];
        int f=a-v[0];
        int g=v[n-1]-b;
        // cout<<c<<"    "<<a<<" "<<b<<"  "<<e<<" "<<f<<" "<<g<<"    ";
        if(e>=f and e>=g and e>=c){cout<<e;}
        else if(f>=e and f>=g and f>=c){cout<<f;}
        else if(g>=f and g>=e and g>=c){cout<<g;}
        else{cout<<c;}
        cout<<"\n";
    }
    return 0;
}