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
        vector<int> v(a);
        for(auto &x:v){cin>>x;}
        if(a==1){cout<<"0\n";continue;}
        sort(v.begin(),v.end());
        int e=1;
        int f=0;
        for(int x=0;x<a-1;x++){
            if(v[x+1]-v[x]<=b){
                e++;
            }
            else{
                if(e>=f){
                    f=e;
                }
                e=1;
            }
        }
        if(e>f){
            f=e;
        }
        cout<<a-f<<"\n";
    }
    return 0;
}