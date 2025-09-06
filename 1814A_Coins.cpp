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
        if(n%2==1 and 2+k<=n){
            if(k%2==0){
                cout<<"NO";
            }
            else{
                cout<<"YES";
            }
        }
        else if(n%2==0 and n>=2){
                cout<<"YES";
        }
        else if(n==k){
            cout<<"YES";
        }
        cout<<"\n";
    }
    return 0;
}