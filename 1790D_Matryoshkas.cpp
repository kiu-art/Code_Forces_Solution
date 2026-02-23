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
        map<int,int>v;
        int a;
        for(int x=0;x<n;x++){
            cin>>a;
            v[a]++;
        }
        int r=0;
        a=0;
        int c=0;
        int b=0;
        // for(auto x:v){
        //     cout<<x.first<<" "<<x.second<<"   ";
        // }
        // while(c!=n){
        //     int b=0;
        //     int e=0;
        //     for(auto &x:v){
        //         if(x.second!=0){
        //             if(x.first-1==b or b==0){
        //                 c++;
        //                 x.second--;
        //                 b=x.first;
        //             }
        //             else{
        //                 // cout<<"asd"<<endl;
        //                 r++;
        //                 e=1;
        //                 break;
        //             }
        //         }
        //     }
        //     if(e==0){r++;}
        // }
        for(auto x:v){
            if(a==0){
                a=x.first;
                b=x.second;
                r+=b;
            }
            else if(x.first==a+1){
                if(x.second>b){
                    r+=x.second-b;
                }
                a=x.first;
                b=x.second;
            }
            else{
                a=x.first;
                b=x.second;
                r+=b;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}