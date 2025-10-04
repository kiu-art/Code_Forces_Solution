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
        int n,q;cin>>n>>q;
        vector<int> arr(n);
        for(int x=0;x<n;x++){
            cin>>arr[x];
        }
        while(q--){
            int x,y;cin>>x>>y;
            x--;y--;
            int result=0;
            vector<int> v=arr;
            if(count(v.begin()+x-1,v.end()+y-1,0)%3!=0 || count(v.begin()+x-1,v.end()+y-1,1)%3!=0){
                cout<<"-1\n";
                continue;
            }
            vector<int>s1;
            vector<int>s2;
            int a=0;int b=0;
            for(int z=x;z<=y;z++){
                cout<<a<<" "<<b<<"    \n";
                if(v[z]==0){
                    s1.push_back(z);
                    a++;
                }
                if(v[z]==1){
                    s2.push_back(z);
                    b++;
                }
                if(a==3){
                    result+=min((s1[2]-s1[1]),(s1[1]-s1[0]));
                    cout<<result<<"sads";
                    v.erase(v.begin()+s1[0]-1);
                    v.erase(v.begin()+s1[1]-1);
                    v.erase(v.begin()+s1[2]-1);
                    s1.empty();
                    s2.empty();
                    a=0;y-=3;
                    z=x-1;
                }
                if(b==3){
                    result+=min((s2[2]-s2[1]),(s2[1]-s2[0]));
                    b=0;
                    v.erase(v.begin()+s2[0]-1);
                    v.erase(v.begin()+s2[1]-1);
                    v.erase(v.begin()+s2[2]-1);
                    s2.empty();
                    s1.empty();
                    y-=3;
                    z=x-1;
                }
            }
            cout<<result<<endl;
        }
    }
    return 0;
}