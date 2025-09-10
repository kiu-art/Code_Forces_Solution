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
        string s;cin>>s;
        int y=0;
        int e=0;
        int f=0;
        for(int x=0;x<a/2;x++){
            if(s[x]==s[(a-1)-x]){
                cout<<a-(x*2);
                e=1;
                break;
            }
            else{
                f+=2;
            }
        }
        if(e==0 and a%2==1){
            cout<<1;
        }
        else if(e==0 and f>=a){
            cout<<0;
        }
        else if(e==0 and a%2==0){
            cout<<2;
        }
        cout<<"\n";
    }
    return 0;
}