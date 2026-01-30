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
        int x,y;cin>>x>>y;
        if((x&y)==0){
            cout<<x<<y<<endl;
        }
        vector<int>v1(32,0);
        vector<int>v2(32,0);
        vector<int>v11(32,0);
        vector<int>v21(32,0);
        int a=x;
        int c=0;
        while(a){
            v12[c]=a;
            v1[c]=a%2;
            a/=2;
            c++
        }
        int i=c;
        a=y;
        c=0;
        while(a){
            v11[c]=
            v2[c]=a%2;
            a/=2;
            c++;
        }
        int j=c;
        if(i>j){
            for(int x=0;x<n;x++){
                if(v2[x]==1 and v1[x]==1){
                    v2[x]=0;
                }
            }
        }
        else if(i<j){
            for(int x=0;x<n;x++){
                if(v2[x]==1 and v1[x]==1){
                    v1[x]=0;
                }
            }
        }
        else{
            for(int x=0;x<n;x++){
                
            }
        }
    }
    return 0;
}