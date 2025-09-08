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
        int a,b;cin>>a>>b;
        vector<int> v(a);
        for(auto &x:v){cin>>x;}
        int result=0;
        sort(v.begin(),v.end());
        int g=1;
        int h=1;
        if(b<=a){
            for(int x=a-b;x<a;x++){
                result+=(g)*v[x];
                g++;
            }
        }
        else{
            result+=v[0]*(b-a+1);
            int f=b-a+1;
            for(int i=1;i<a;i++){
                result+=v[i]*(f+i);
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}