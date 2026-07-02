// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    //     int t;cin>>t;
    //     while(t--){
        //         int a,b;cin>>a>>b;
        //         int k=a/b;
        //         if(k==0){
            //             cout<<a<<endl;
            //             continue;
            //         }
            //         bitset<32>v(k);
            //         int e=v.count();
            //         int f=0;
            //         while(k!=0){
//             f++;
//             k/=2;
//         }
//         int g=pow(2,f-1)-1;
//         int i=a-(g*b);
//         int h=pow(2,f-1);
//         int j=i/h;
//         // cout<<g<<"  "<<f<<"  "<<i<<"  "<<h<<"  "<<j<<endl;
//         int r=max((((f-1)*b)+j),e*b);
//         cout<<r<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int r=0;
        int k=0;
        int i=0;
        while(k<=a){
            k+=pow(2,i);
            if(a>=k*b){
                r=(i+1)*b;
            }
            else{
                int u=k-pow(2,i);
                u=a-u*b;
                r+=u/(pow(2,i));
                break;
            }
            i++;
        }
        cout<<r<<endl;
    }
}