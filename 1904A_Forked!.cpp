#include <iostream> 
#include <vector>   
#include <algorithm> 
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
        int a,b,x,y,e,f;cin>>a>>b>>x>>y>>e>>f;
        vector<vector<int>> v1(8,vector<int>(2));
        vector<vector<int>> v2(8,vector<int>(2));
        int r=0;
        int v=a;
        int g=b;
        for(int u=0;u<4;u++){
            v1[u][0]=x+a;
            v1[u][1]=y+b;
            switch (r){
                case 0:
                    a=-a;
                    break;
                case 1:
                    b=-b;
                    break;
                case 2:
                    a=-a;
                    break;
            }
            r++;
        }
        r=0;
        a=g;
        b=v;
        for(int u=4;u<8;u++){
            v1[u][0]=x+a;
            v1[u][1]=y+b;
            switch (r){
                case 0:
                    a=-a;
                    break;
                case 1:
                    b=-b;
                    break;
                case 2:
                    a=-a;
                    break;
            }
            r++;
        }
        r=0;
        a=g;
        b=v;
        for(int u=0;u<4;u++){
            v2[u][0]=e+a;
            v2[u][1]=f+b;
            switch (r){
                case 0:
                    a=-a;
                    break;
                case 1:
                    b=-b;
                    break;
                case 2:
                    a=-a;
                    break;
            }
            r++;
        }
        r=0;
        a=v;
        b=g;
        for(int u=4;u<8;u++){
            v2[u][0]=e+a;
            v2[u][1]=f+b;
            switch (r){
                case 0:
                    a=-a;
                    break;
                case 1:
                    b=-b;
                    break;
                case 2:
                    a=-a;
                    break;
            }
            r++;
        }
        int result=0;
        for(auto x:v1){
            for(auto y:v2){
                // cout<<x[0]<<" "<<x[1]<<" "<<y[0]<<" "<<y[1]<<"   ";
                if(x[0]==y[0] and x[1]==y[1]){
                    result++;
                }
            }
        }if(v==g){
            result/=4;
        }
        cout<<result<<"\n";
    }
    return 0;
}