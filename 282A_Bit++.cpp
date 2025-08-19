#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a=0;
    cin>>n;
    int result=0;
    string b;
    while(a!=n){
        a++;
        cin>>b;
        if(b[1]=='-'){
            result --;
        }
        else{result ++;}
    }
    cout<<result;
}ref