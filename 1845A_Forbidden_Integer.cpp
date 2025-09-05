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
        vector<int> v;
        int n,k,a;cin>>n>>k>>a;
        if(k==1){
            cout<<"NO";
        }
        else if(k==2 and a==1 and n%2==1){
            cout<<"NO";
        }
        else if(a!=1){
            cout<<"YES\n";
            for(int x=0;x<n;x++){
                v.push_back(1);
            }
            cout<<v.size()<<"\n";
            for(auto f:v){cout<<f<<" ";}
        }
        else{
            cout<<"YES\n";
            if(n%2==0){
                for(int x=1;x<=n;x+=2){
                    v.push_back(2);
                }
            }
            else{
                for(int x=1;x<=n-3;x+=2){
                    v.push_back(2);
                }
                v.push_back(3);
            }
            cout<<v.size()<<"\n";
            for(auto f:v){cout<<f<<" ";}
        }
        cout<<"\n";
    }
    return 0;
}