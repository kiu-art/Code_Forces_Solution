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
        int result=0;
        int a=0;
        int b=0;
        for(int x=0;x<n;x++){
            cin>>a;
            if(a==0){
                result++;
            }
            else{
                if(b<result){
                    b=result;
                }
                result=0;
            }
        }
        if(b<result){
            b=result;
        }
        cout<<b<<"\n";
    }
    return 0;
}