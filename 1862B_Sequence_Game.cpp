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
    while(t--){
        int b=0;
        int m;cin>>m;
        vector<int> a(m);
        vector<int> v;
        for(auto &x:a){
            cin>>x;
            if(x<b){
                v.push_back(1);
            }
            b=x;
            v.push_back(x);
        }
        cout<<v.size()<<"\n";
        for(auto x:v){cout<<x<<" ";}
        cout<<"\n";
    }
    return 0;
}