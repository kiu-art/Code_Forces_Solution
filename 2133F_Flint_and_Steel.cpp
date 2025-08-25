#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std; 

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
int main() {
    fast_io();
    int t;cin>>t;
    for(int u=0;u<t;u++){
        int n;cin>>n;
        vector<int> v(n);
        for(auto &x:v){cin>>x;}
        vector<int> v1;
        vector<int> v2;
        v2=v;
        sort(v2.begin(),v2.end());
        for(int x=0;x<n;x++){
            if(v[x]==0){
                int e=0;
                int f=0;
                for(int y=0;y<n;y++){
                    if(v[y]-1>=abs(y-x) and abs(y-x)>=e){
                        e=abs(y-x);
                        f=y;
                    }
                }
                for(int x=1;x<v[f];x++){
                if(f-x>=0){v[f-x]=-1;}
                if(f+x<n){v[f+x]=-1;}
            }
            v[f]=-1;
            v1.push_back(f+1);
        }
    }
    for(auto x:v1){cout<<x<<" ";}
        for(int h=n-1;h>=0;h--){
            int a=0;
            if(v2[h]!=-1){
            a=v2[h];}
            vector<vector<int>> arr;
            for(int x=0;x<n;x++){
                if(v[x]==a){
                    int b=0;
                    int c=0;
                    int d=0;
                    for(int a=1;a<v[x];a++){
                        if(c==0 and (x-a)>=0 and v[x-a]!=-1){
                            b++;
                        }
                        else{c=1;}
                        if(d==0 and (x+a)<n and v[x+a]!=-1){
                            b++;
                        }
                        else{d=1;}
                    }
                    arr.push_back({x,b});
                }
            }
            int b=0;
            int c=0;
            for(int x=0;x<arr.size();x++){
                if(arr[x][1]>b){
                    b=arr[x][1];
                    c=arr[x][0];
                }
            }
            for(int x=1;x<v[c];x++){
                if(c-x>=0){v[c-x]=-1;}
                if(c+x<n){v[c+x]=-1;}
            }
            v[c]=-1;
            v1.push_back(c);
        }
        if(v1.size()==0){cout<<-1<<"\n";}
        else{
        cout<<v1.size()<<"\n";
        for(auto x:v1){cout<<x+1<<" ";}cout<<"\n";}
    }
    return 0;
}