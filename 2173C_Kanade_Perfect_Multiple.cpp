#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
signed main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        set<int>s;
        vector<int>arr(n);
        int g=0;
        sort(arr.begin(),arr.end());
        for(auto &x:arr){
            cin>>x;
        }
        for(auto x:arr){
            if(g==1){
                break;
            }
            int e=0;
            for(auto y:s){
                if(x%y==0){
                    e=1;
                    break;
                }
            }
            if(e==0){
                int q=0;
                int l=0;
                for(int y=1;y<=k or y<=x;y++){
                    if(x%y==0){
                        int w=0;
                        for(int p=y;p<=k;p+=y){
                            if(count(arr.begin(),arr.end(),p)==0){
                                w=-1;
                                break;
                            }
                        }
                        if(w==-1){continue;}
                        for(auto j:arr){
                            if(j%y==0){
                                w++;
                            }
                        }
                        if(w>q){q=w;l=y;}
                    }
                }
                if(l==0){g=1;}
                else{s.insert(l);}
            }
        }
        if(g==1){cout<<-1<<endl;continue;}
        cout<<s.size()<<endl;
        for(auto x:s){cout<<x<<" ";}
        cout<<endl;
    }
    return 0;
}