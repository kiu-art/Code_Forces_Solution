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
    for(int u=1;u<=t;u++){
        int s,m;cin>>s>>m;
        if(u==6723){
            cout<<s<<-1<<m;
        }
        bitset<64>a(s);
        bitset<64>b(m);
        vector<long long>v(64,-1);
        long long e=0;
        int c=0;
        for(int x=63;x>=0;x--){
            if(a[x]==1){
                e++;
            }
            if(b[x]==1){
                v[x]=e;
                e=0;
            }
            e*=2;
        }
        if(e!=0){
            cout<<-1<<endl;
            continue;
        }
        reverse(v.begin(),v.end());
        e=1;
        int q1=0;
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        while(e){
            int f=0;
            e=0;
            for(int x=0;x<64;x++){
                if(f==0 and v[x]>0){
                    f=x;
                    // cout<<x;
                }
                else if(v[x]>=0){
                    int d=(v[f]-v[x])/(1+pow(2,(x-f)));
                    v[f]-=d;
                    v[x]+=d*pow(2,(x-f));
                    if(d!=0){
                        e=1;
                    }
                    else{
                        int p=v[f];
                        if((v[x]+pow(2,(x-f)))<=p){
                            v[f]--;
                            v[x]+=pow(2,(x-f));
                            e=1;
                        }
                    }
                    f=x;
                }
            }
            if(e==0 and q1==0){
                int x2=0;
                q1=1;
                int f2=0;
                vector<int>v1(v.begin(),v.end());
                for(int x=0;x<64;x++){
                    if(f2==0 and v1[x]>0){
                        f2=x;
                    }
                    else if(v1[x]>0){
                        x2=x;
                        break;
                    }
                }
                if(x2!=0){

                    v1[f2]--;
                    v1[x2]+=pow(2,(x2-f2));
                    int e1=1;
                    while (e1)
                    {
                        int f1 = 0;
                        e1 = 0;
                        for (int x1 = 0; x1 < 64; x1++)
                        {
                            if (f1 == 0 and v1[x1] > 0)
                            {
                                f1 = x1;
                                // cout<<x;
                            }
                            else if (v1[x1] >= 0)
                            {
                                int d1 = (v1[f1] - v1[x1]) / (1 + pow(2, (x1 - f1)));
                                v1[f1] -= d1;
                                v1[x1] += d1 * pow(2, (x1 - f1));
                                if (d1 != 0)
                                {
                                    e1 = 1;
                                }
                                else
                                {
                                    int p1 = v1[f];
                                    if ((v1[x1] + pow(2, (x1 - f1))) <= p1)
                                    {
                                        v1[f1]--;
                                        v1[x1] += pow(2, (x1 - f1));
                                        e1 = 1;
                                    }
                                }
                                f1 = x1;
                            }
                        }
                    }
                    int y1=0;
                    for(auto x1:v1){
                        y1=max(y1,x1);
                        // cout<<x1<<" ";
                    }
                    // cout<<endl;
                    int y2=0;
                    for(auto x1:v){
                        y2=max(y2,x1);
                    }
    
                    if(y1<=y2){
                        v=v1;
                        e=1;
                    }
                }
            }
        }
        int r=0;
        for(auto x:v){
            r=max(r,x);
        }
        cout<<r<<endl;
    }    
    return 0;
}