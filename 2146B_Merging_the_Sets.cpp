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
        int n,m;cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m,0));
        int a=0;
        vector<int>arr(m);
        int b;
        int c=0;
        int d=0;
        int e=0;
        for(int x=0;x<n;x++){
            cin>>a;
            for(int y=0;y<a;y++){
                cin>>b;
                v[x][b-1]=1;
            }
            if(a==m and count(arr.begin(),arr.end(),0)==0){
                c++;
            }
        }
        if(c==2 and n==2){
            cout<<"YES\n"
            continue;
        }
        else if(c!=0 and n>2){
            cout<<"YES\n";
            continue;
        }
        for(int x=0;x<n;x++){
            
        }
        
    }
    return 0;
}