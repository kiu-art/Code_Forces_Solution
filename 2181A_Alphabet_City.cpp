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
    int n,m;cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(26,0));
    vector<int>a(26,0);
    for(int q=0;q<n;q++){
        string x;
        cin>>x;
        for(auto y:x){
            v[q][y-65]++;
            a[y-65]++;
        }
    }
    for(int x=0;x<n;x++){
        int b=m;
        int e=0;
        for(int y=0;y<26;y++){
            if(a[y]==0){
                continue;
            }
            if(a[y]-v[x][y]==0){
                cout<<"-1 ";
                e=1;
                break;
            }
            if(v[x][y]/(a[y]-v[x][y])>=m){
                if(v[x][y]/(a[y]-v[x][y])==m and v[x][y]%(a[y]-v[x][y])==0){
                    b=0;
                }
                else{
                    cout<<-1<<" ";
                    e=1;
                    break;
                }
            }
            else{
                // cout<<b<<endl;
                b=min(b,(m-(v[x][y]/(a[y]-v[x][y])+bool(v[x][y]%(a[y]-v[x][y])))));
            }
        }
        if(e==0){
            cout<<b<<" ";
        }
    }
    return 0;
}