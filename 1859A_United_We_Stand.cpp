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
        vector<int> a;
        vector<int> b;
        int d=0;
        sort(v.begin(),v.end());
        if(count(v.begin(),v.end(),v[0])!=n){
            d=1;
        for(int h=0;h<n;h++){
            int x=v[h];
            int e=0;
            for(int g=0;g<n;g++){
                int y=v[g];
                if(x!=y and y%x==0){
                    e=1;
                    a.push_back(x);
                    break;
                }
            }
            if(e==0){
                b.push_back(x);
            }
        }}
        int r=0;
        if(d=1 and a.size()==0 and b.size()!=0){
            r=count(b.begin(),b.end(),b[0]);
            int x=b[0];
            for(auto &y:b){
                if(x==y){y=0;}
            }
            vector<int> w(r,x);
            a=w;
        }
        if(b.size()==0){cout<<-1;}
        else{
            cout<<a.size()<<" "<<b.size()-r<<"\n";
            for(auto x:a){cout<<x<<" ";}
            cout<<"\n";
            for(auto x:b){if(x!=0){cout<<x<<" ";}}
        }
        cout<<"\n";
    }
    return 0;
}