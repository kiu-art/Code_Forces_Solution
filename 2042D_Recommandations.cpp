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
    for(int u=0;u<t;u++){
        int n;cin>>n;
        vector<vector<int>> arr(n,vector<int>(2));
        for(int x=0;x<n;x++){cin>>arr[x][0]>>arr[x][1];}
        for(int y=0;y<n;y++){
            vector<int> v;
            for(int x=0;x<n;x++){
                if(x!=y and arr[y][0]>=arr[x][0] and arr[y][1]<=arr[x][1]){v.push_back(x);}
            }
            if(v.size()!=0){
                int a=arr[v[0]][0];int b=arr[v[0]][1];
                for(int x=0;x<v.size();x++){
                    if(arr[v[x]][0]>a){a=arr[v[x]][0];}
                    if(arr[v[x]][1]<b){b=arr[v[x]][1];}
                }
                cout<<(arr[y][0]-a)+(b-arr[y][1])<<endl;
            }
            else{cout<<0<<endl;}
        }
    }
    return 0;
}