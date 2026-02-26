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
        int s,m;cin>>s>>m;
        deque<int>v;
        int a=m;
        int b=1;
        while(a){
            v.push_front(a%2);
            a/=2;
            b*=2;
        }
        b/=2;
        a=s;
        vector<int>v1;
        for(auto x:v){
            cout<<x<<" ";
            if(x==1){
                int e=a/b;
                a-=e*b;
                v1.push_back(e);
            }
            b/=2;
        }
        int f=v1.size();
        int r=0;
        for(int x=0;x<f;x++){
            cout<<v1[x]<<"  ";
            if(v1[x]>0){
                r+=v1[x];
            }
            else{continue;}
            for(int y=x;y<f;y++){
                v1[y]=v1[y]-v1[x];
            }
        }

        if(a==0){cout<<"sdasd"<<r<<endl;}
        else{cout<<-1<<endl;}
    }
    return 0;
}