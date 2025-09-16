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
    while(t--){
        int a;
        int n;cin>>n;
        vector<int> v(n);
        vector<int> r;
        for(int x=0;x<n;x++){
            cin>>a;
            v[x]=a;
            if(a==0){r.push_back(x);}
        }
        if(count(v.begin(),v.end(),0)==n){
            if(n==1){
                cout<<0;
                continue;
            }
            else{
            cout<<n<<"\n";
        continue;}
            
        }
        vector<int> arr;
        for(int x=1;x<=n;x++){
            int u=0;
            for(auto y:v){
                if(x!=y){
                    u++;
                }
                if(u==n){
                    arr.push_back(x);
                }
            }
        }
        int f=r.size()-1;
        sort(arr.begin(),arr.end());
        for(auto x:r){
            v[x]=arr[f];
            f--;
        }
        vector<int> v2(n);
        v2=v;
        int g=0;
        int h=0;
        int i=0;
        sort(v2.begin(),v2.end());
        for(int x=0;x<n;x++){
            if(v2[x]!=v[x] and h==0){
                g=x;
                h=1;
            }
            if(v2[x]!=v[x] and h==1){
                i=x;
            }
        }
        if(i==g){cout<<0<<"\n";}
        else{
        cout<<i-g+1<<"\n";
        }
    }
    return 0;
}