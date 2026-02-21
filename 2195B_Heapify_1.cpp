#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n+1,0);
        for(int x=1;x<n+1;x++){
            cin>>v[x];
        }
        vector<int>b=v;
        set<int>s;
        for(int x=1;x<=(n+1)/2;x++){
            set<int>a;
            auto i=s.find(x);
            if(i==s.end()){
                for(int y=x;y<=n;y*=2){
                    a.insert(v[y]);
                    s.insert(y);
                }
                int e=x;
                for(auto y:a){
                    v[e]=y;
                    e*=2;
                }
            }
        }
        vector<int>v2=v;
        sort(v2.begin(),v2.end());
        if(v2==v){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}