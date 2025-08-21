#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    for(int x=0;x<a.length();x++){
        int y=a[x];
        int z=b[x];
        if(y<97){
            y+=97-65;
        }
        if(z<97){
            z+=97-65;
        }
        if(z>y){
            cout<<-1;
            return 0;
        }
        if(z<y){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
}