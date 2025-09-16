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
        int result=0;
        int b=0;
        for(int x=1;x<100;x++){
            if(n%x==0){
                b++;
            }
            else{
                if(b>result){
                    result=b;
                }
                b=0;
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}