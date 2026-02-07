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
        string s;cin>>s;
        vector<int> v(26,0);
        set<char> a;
        // if(u==734){
        //     cout<<s;
        // }
        for(auto x:s){
            v[x-97]++;
            a.insert(x);
        }
        int e=0;
        int c=a.size();
        if(c==1){
            cout<<"YES"<<endl;
            continue;
        }
        set<char>b;
        for(int x=0;x<c;x++){
            b.insert(s[x]);
        }
        if(b.size()==c){
            string i=s.substr(0,c);
            string j;
            int f=0;
            for(int x=c;x<s.length();x+=c){
                if(s.substr(x,c)!=i){
                    if(s.length()-c<x){
                        j=s.substr(x,(s.length()-x));
                        f=1;
                    }
                    e=1;
                    break;
                }
            }
            // cout<<j<<f<<endl;
            if(e==0){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                if(f==1){
                    if(i.substr(0,j.length())==j){
                        cout<<"YES"<<endl;
                        continue;
                    }
                }
            }
        }
        e=0;
        for(int x=0;x<26;x++){
            if(e==1){
                break;
            }
            if(v[x]>1){
                if(c>2){
                    e=1;
                    break;
                }
                else{
                    for(int y=1;y<s.length();y++){
                        if(s[y]==s[y-1]){
                            e=1;
                            break;
                        }
                    }
                }
            }
        }
        if(e==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}