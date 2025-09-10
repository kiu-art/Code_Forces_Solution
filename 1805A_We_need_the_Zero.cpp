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
        int a;cin>>a;
        vector<int> v(a);
        for(auto &x:v){cin>>x;}
        vector<int>arr;
        int f=1;
        for(int b=0;b<256;b++){
            int result=v[0]^b;
            for(int y=1;y<a;y++){
                int e=v[y]^b;
                result=(result^e);
            }
            if(result==0){
                cout<<b;
                f=0;
                break;
            }
        }
        if(f==1){
            cout<<-1;
        }
        cout<<"\n";
    }
    return 0;
}