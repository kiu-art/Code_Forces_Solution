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
    for(int w=0;w<t;w++){
        int n;cin>>n;
        vector<int>v (n);
        for(auto &x:v){cin>>x;}
        int a=v[n-1];
        if(v[0]!=1){cout<<"NO";}
        else{
            cout<<"YES";
        }
        cout<<"\n";
    }
    return 0;
}