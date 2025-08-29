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
        int a,b;cin>>a>>b;
        vector<int>arr(a);
        vector<int>v(100,0);
        int g=0;
        for(int x=0;x<a;x++){
            int c;cin>>c;
            arr[x]=c;
            v[c-1]++;
            if(b==c){
                g=1;
            }
        }
        if(g==1){cout<<"YES";}
        else{cout<<"NO";}
        cout<<"\n";
    }
    return 0;
}