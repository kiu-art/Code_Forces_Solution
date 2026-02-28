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
        vector<string>v;
        for(int x=0;x<26;x++){
            char s=x+97;
            string h(1,s);
            // cout<<h<<" ";
            v.push_back(h);
        }

        for(int x=0;x<26;x++){
            char a=x+97;
            string a1(1,a);
            for(int y=0;y<26;y++){
                char b=y+97;
                string b1(1,b);
                string s=a1+b1;
                v.push_back(s);
            }
        }
        for(int x=0;x<26;x++){
            char a=x+97;
            string a1(1,a);
            for(int y=0;y<26;y++){
                char b=y+97;
                string b1(1,b);
                for(int z=0;z<26;z++){
                    char c=z+97;
                    string c1(1,c);
                    string s=a1+b1+c1;
                    v.push_back(s);
                }
            }
        }
        while(t--){
            int n;cin>>n;
            string s;cin>>s;
            auto e=s.find(s+"asd");
            for(auto x:v){
                if(s.find(x)==e){
                    cout<<x<<endl;
                    break;
                }
            }
        }
        return 0;
    }