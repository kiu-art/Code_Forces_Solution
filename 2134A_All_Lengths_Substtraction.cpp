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
        int n;cin>>n;
        vector<int> v(n);
        int e=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
        }
        int h=0;
        for(int x=1;x<n-1;x++){
            if(v[x]>v[x-1] and v[x]>v[x+1]){
                e++;
            }
            if(v[x]<v[x-1] and v[x]<v[x+1]){
                cout<<"NO\n";
                h=1;
                break;
            }
        }
        if(h==0){
            if(e==0 or e==1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}