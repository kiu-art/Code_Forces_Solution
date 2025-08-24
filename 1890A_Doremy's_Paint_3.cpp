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
        int n;cin>>n;
        vector<int> v(n);
        for(auto &x:v){cin>>x;}
        sort(v.begin(),v.end());
        int a=v[0];
        int b=v[n-1];
        int c=0;
        int d=0;
        int e=0;
        for(auto x:v){
            if(x!=a and x!=b){e=1;break;}
            if(x==a){c+=1;}
            if(x==b){d+=1;}
        }
        if(e==0 and abs(c-d)<=1){cout<<"Yes";}
        else{cout<<"No";}
        cout<<"\n";
        }
    return 0;
}