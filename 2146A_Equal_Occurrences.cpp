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
        vector<int> arr(100);
        for(auto &x:v){
            cin>>x;
            arr[x-1]++;
        }
        int a=0;
        int b=0;
        for(int x=100;x>=1;x--){
            b+=count(arr.begin(),arr.end(),x);
            if(b*x>=a){
                a=b*x;
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}