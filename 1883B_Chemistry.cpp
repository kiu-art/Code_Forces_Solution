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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        vector<int> v(26,0);
        for(auto x:s){
            int a=x;
            v[a-97]++;
        }
        int result=0;
        for(auto x:v){
            if(x%2==1){
                result++;
            }
        }
        if((result-k)<=1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}