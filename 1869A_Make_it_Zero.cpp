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
        for(auto &x:v){
            cin>>x;
        }
        int b=0;
        vector<int> re;
        for(int x=0;x<7;x++){
            int s=v[x];
            for(int y=x+1;y<8;y++){
                s=v[y]^s;
                if(s=0){
                    b=y;
                }
            }
            if(b!=0){
                for(int z=x;z<=b;z++){v[z]=0;}
                re.push_back(x);
                re.push_back(b);
            }
            b=0;
        }
        cout<<re.size()<<"\n";
        for(int x=0;x<re.size();x+=2){
            cout<<re[x]<<" "<<re[x+1]<<"\n";
        }
    }
    return 0;
}