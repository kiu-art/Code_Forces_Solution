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
        int n,k;cin>>n>>k;
        vector<int> v(n);
        int a=0;
        int result=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            if(v[x]==0){a++;}
            if(v[x]==1){a=0;}
            if(a!=0 and a%k==0){result++;a=-1;}
        }
        cout<<result<<"\n";
    }
    return 0;
}