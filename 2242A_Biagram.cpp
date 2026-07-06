#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int k;cin>>k;
        vector<int>v(k);
        int a=0;
        int b=0;
        for(auto &x:v){
            cin>>x;
            if(x>=3){
                a=1;
            }
            else if(x>=2){
                b++;
            }
        }
        if(b>=2 or a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}