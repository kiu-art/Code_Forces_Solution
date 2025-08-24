#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std; 

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int main() {
    fast_io(); 
    int t;cin>>t;
    for(int u=0;u<t;u++){
        int n;cin>>n;
        vector<int>v(n);
        for(auto &x:v){cin>>x;}
        sort(v.begin(),v.end());
        int a=0;
        for(int x=0;x<n-1;x++){
            if(v[x]==v[x+1]){
                cout<<"YES";
                a=1;
                break;
            }
        }
        if(a==0){cout<<"NO";}
        cout<<"\n";
    }
    return 0;
}