#include <bits/stdc++.h> 
using namespace std; 
#define int long long

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int ma=2000100;
vector<int> v(ma);
vector<set<int>> num(ma);
void sieve(){
    for(int x=1;x<ma;x++){
        v[x]=x;
    }
    for(int x=2;x<ma;x++){
        if(v[x]==x){
            for(int y=x*x;y<ma;y+=x){
                if(v[y]==y){
                    v[y]=x;
                }
            }
        }
    }
}
int factor(int n){
    if(n<2){return 0;}
    set<int> s;
    int l=n;
    while(n>=2){
        s.insert(v[n]);
        n/=v[n];
    }
    num[l].insert(s.begin(),s.end());
    return 0;
}
signed main() {
    fast_io(); 
    sieve();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        set<int>s;
        vector<int>arr(n);
        int g=0;
        int h=0;
        for(auto &x:arr){
            cin>>x;
            h+=x;
        }
        sort(arr.begin(),arr.end());
        if(arr[n-1]<=k and h==n*(n+1)/2 ){cout<<1<<endl<<1<<endl;continue;}
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
                if(num[x].size()==0){
                    factor(x);
                }

                for(auto y:num[x]){
                    if(y>k){
                        break;
                    }
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
                if(l==0){g=1;}
                else{s.insert(l);}
                // for(int y=1;y<=k or y<=x;y++){
                //     if(x%y==0){
                //         int w=0;
                //         for(int p=y;p<=k;p+=y){
                //             if(count(arr.begin(),arr.end(),p)==0){
                //                 w=-1;
                //                 break;
                //             }
                //         }
                //         if(w==-1){continue;}
                //         for(auto j:arr){
                //             if(j%y==0){
                //                 w++;
                //             }
                //         }
                //         if(w>q){q=w;l=y;}
                //     }
                // }
            }
        }
        if(g==1){
            cout<<-1<<endl;continue;
        }
        cout<<s.size()<<endl;
        for(auto x:s){cout<<x<<" ";}
        cout<<endl;
    }
    return 0;
}