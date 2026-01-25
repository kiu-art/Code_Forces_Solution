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
        int n;cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(n);
        int r=0;
        for(auto &x:a){cin>>x;r+=x;}
        r=(r/3)+bool(r%3);
        for(int x=0;x<n;x++){cin>>b[x];}
        for(int x=0;x<n;x++){cin>>c[x];}
        int e=0;
        int f=0;
        int i=0;
        int j=0;
        int k=0;
        for(int x=0;x<n;x++){
            if(e==0){
                f+=a[x];
            }
            else if(e==1 or e==5){
                f+=b[x];
            }
            else if(e==2 or e==4){
                f+=c[x];
            }
            // cout<<x;
            if(f>=r){
                if(e==0){
                    i=x+1;
                }
                else if(e==1 or e==5){
                    j=x+1;
                }
                else if(e==2 or e==4){
                    k=x+1;
                }
                // cout<<"asda"<<f;
                e++;
                f=0;
                if(e==3 or e==6){
                    break;
                }
            }
            if(e<=2 and x==n-1){
                x=i-1;
                e=4;
                f=0;
                continue;
            }
        }
        // cout<<"  "<<r;
        if(e==3){
            cout<<"1 "<<i<<" "<<i+1<<" "<<j<<" "<<j+1<<" "<<n<<endl;
            continue;
        }
        if(e==6){
            cout<<"1 "<<i<<" "<<k+1<<" "<<n<<" "<<i+1<<" "<<k<<endl;
            continue;
        }
        e=0;
        f=0;
        i=0;
        j=0;
        k=0;
        for(int x=0;x<n;x++){
            if(e==0){
                f+=b[x];
            }
            else if(e==1 or e==5){
                f+=a[x];
            }
            else if(e==2 or e==4){
                f+=c[x];
            }
            if(f>=r){
                if(e==0){
                    j=x+1;
                }
                else if(e==1 or e==5){
                    i=x+1;
                }
                else if(e==2 or e==4){
                    k=x+1;
                }
                e++;
                f=0;
                if(e==3 or e==6){
                    break;
                }
            }
            if(e<=2 and x==n-1){
                x=j-1;
                e=4;
                f=0;
            }
        }
        if(e==3){
            cout<<j+1<<" "<<i<<" "<<"1 "<<j<<" "<<i+1<<" "<<n<<endl;
            continue;
        }
        if(e==6){
            cout<<k+1<<" "<<n<<" "<<"1 "<<j<<" "<<j+1<<" "<<k<<endl;
            continue;
        }
        e=0;
        f=0;
        i=0;
        j=0;
        k=0;
        for(int x=0;x<n;x++){
            if(e==0){
                f+=c[x];
            }
            else if(e==1 or e==5){
                f+=a[x];
            }
            else if(e==2 or e==4){
                f+=b[x];
            }
            if(f>=r){
                if(e==0){
                    k=x+1;
                }
                else if(e==1 or e==5){
                    i=x+1;
                }
                else if(e==2 or e==4){
                    j=x+1;
                }
                e++;
                f=0;
                if(e==3 or e==6){
                    break;
                }
            }
            if(e<=2 and x==n-1){
                x=k-1;
                e=4;
                f=0;
            }
        }
        if(e==3){
            cout<<k+1<<" "<<i<<" "<<i+1<<" "<<n<<" "<<1<<" "<<k<<endl;
            continue;
        }
        if(e==6){
            cout<<j+1<<" "<<n<<" "<<k+1<<" "<<j<<" "<<1<<" "<<k<<endl;
            continue;
        }
        cout<<"-1"<<endl;
    }
    return 0;
}