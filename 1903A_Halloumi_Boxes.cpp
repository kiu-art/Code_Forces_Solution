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
    int n;cin>>n;
    for(int x=0;x<n;x++){
        int a,b;
        cin>>a>>b;
        vector<int> v(a);
        vector<int> k;
        for(auto &y:v){cin>>y;}
        k=v;
        sort(v.begin(),v.end());
        if(b>1){cout<<"YES";}
        else if(v==k){cout<<"YES";}
        else{cout<<"NO";}
        cout<<"\n";
    }
    return 0;
}