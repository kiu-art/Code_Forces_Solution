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
        for(int x=0;x<n;x++){
            int a;
            cin>>a;
            if(x!=0){
                v[x]=v[x-1]+a;
            }
            else{
                v[x]=a;
            }
        }
        int e=0;
        int l=0;int r=0;
        for(int x=0;x<n;x++){
            for(int y=x+1;y<n;y++){
                // cout<<(v[x])%3<<" "<<(v[y]-v[x])%3<<" "<<(v[n-1]-v[y])%3;
                if((v[x])%3==(v[y]-v[x])%3 and (v[n-1]-v[y])%3==(v[y]-v[x])%3){
                    l=x;
                    r=y;
                    e=1;
                    break;
                }
                if((v[x])%3!=(v[y]-v[x])%3 and (v[n-1]-v[y])%3!=(v[y]-v[x])%3 and (v[n-1]-v[y])%3!=(v[x])%3 ){
                    l=x;
                    r=y;
                    e=1;
                    break;
                }
            }
            if(e==1){break;}
        }
        if(e==0){cout<<"0 0\n";}
        else{
        cout<<l+1<<" "<<r+1<<"\n";
        }
    }
    return 0;
}