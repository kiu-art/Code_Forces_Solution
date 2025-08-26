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
    for(int u=0;u<t;u++){
        int n,a,b;cin>>n>>a>>b;
        if(n%2==0){
            if(a<=b){
                if(b%2==0){
                    cout<<"YES";
                }
                else{cout<<"NO";}
            }
            else{
                if(a%2==0 and b%2==0){
                    cout<<"YES";
                }
                else{cout<<"NO";}
            }
        }
        else{
            if(a<=b){
                if(b%2!=0){
                    cout<<"YES";
                }
                else{cout<<"NO";}
            }
            else{
                if(a%2!=0 and b%2!=0){
                    cout<<"YES";
                }
                else{cout<<"NO";}
            }
        }
        cout<<"\n";
    }
    return 0;
}