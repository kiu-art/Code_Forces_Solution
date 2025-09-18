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
        vector<int> r(n);
        vector<int> a;
        for(auto &x:v){cin>>x;r[x-1]=1;}
        for(int x=0;x<n;x++){
            if(r[x]==0){
                a.push_back(x+1);
            }
        }
        int b=a.size()-1;
        sort(a.begin(),a.end());
        for(auto &x:v){
            if(x==0){
                x=a[b];
                b--;
            }
        }
        int g=0;
        int h=0;
        int e=1;
        for(int x=0;x<n;x++){
            if(v[x]!=x+1 and e==1){
                g=x;
                e=0;
            }
            if(v[x]!=x+1){
                h=x;
            }
        }
        cout<<h-g+bool(h-g)<<"\n";
    }
    return 0;
}