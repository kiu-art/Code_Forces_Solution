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
        int n,k;cin>>n>>k;
        deque<int>v(n);
        int r=0;
        for(int x=0;x<n;x++){
            cin>>v[x];
            r+=v[x];
        }
        if(r<k){
            cout<<-1<<endl;
            continue;
        }
        if(r==k){
            cout<<0<<endl;
            continue;
        }
        int a=0;
        int b=0;
        int c=0;
        deque<int>arr;
        int e=1;
        for(int x=0;x<n;x++){
            if(v[x]==1){
                c++;
                arr.push_back(x);
            }
            if(c>k){
                c--;
                if(e){
                    e=0;
                    a=x;
                }
                else{
                    a=max(a,x-arr[0]-1);
                    arr.pop_front();
                }
            }
        }
        a=max(a,n-arr[0]-1);
        // for(auto x:arr){
        //     cout<<x<<" ";
        // }
        cout<<n-a<<endl;
    }
    return 0;
}