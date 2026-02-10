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
    int a,b;cin>>a>>b;
    deque<int>v1(a);
    for(int x=0;x<a;x++){
        cin>>v1[x];
    }
    int i,j,k;
    for(int x=0;x<b;x++){
        cin>>i;
        for(int y=0;y<a;y++){
            if(v1[y]==i){
                cout<<y+1<<" ";
                v1.erase(v1.begin()+y,v1.begin()+y+1);
                v1.push_front(i);
                break;
            }
        }
    }
    return 0;
}