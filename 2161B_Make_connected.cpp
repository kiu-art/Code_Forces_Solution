// // #include <bits/stdc++.h> 
// // using namespace std; 
// // #define int long long

// // void fast_io() {
// //     std::ios_base::sync_with_stdio(false);
// //     std::cin.tie(NULL);
// //     std::cout.tie(NULL);
// // }

// // signed main() {
// //     fast_io(); 
// //     int t;cin>>t;
// //     while(t--){
// //         int n;cin>>n;
// //         int a=0,b=0;
// //         int c=0;
// //         int e=0;
// //         int f=0;
// //         int g=0;
// //         int h=0;
// //         int r=0;
// //         vector<vector<char>>v(n,vector<char>(n));
// //         for(int y=0;y<n;y++){
// //             for(int x=0;x<n;x++){
// //                 cin>>v[y][x];
// //                 if(v[y][x]=='#' and c==0){
// //                     a=x;
// //                     b=y;
// //                     c=1;
// //                 }
// //                 else if(v[y][x]=='#'){
// //                     c++;
// //                     if((abs(x-a)+abs(y-b))==1){
// //                         h++;
// //                     }
// //                     else if(f==0){
// //                         f=abs(x-a)-abs(y-b);
// //                     }
// //                     if(abs(abs(x-a)-abs(y-b))>1){
// //                         r++;
// //                     }
// //                     if(g==0 and x!=a){
// //                         if(x>a){
// //                             g=2;
// //                         }
// //                         else{
// //                             g=1;
// //                         }
// //                     }
// //                     else{
// //                         if(x-a+y-b>2){
// //                             h==3;
// //                         }
// //                         if(abs(x-a)-abs(y-b)!=f or bool(x>a)!=g-1){
// //                             if(x==a){
// //                                 continue;
// //                             }
// //                             e++;
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //         if(r!=0){
// //             cout<<"NO\n";
// //         }
// //         else if(e>0){
// //             if(h==2 and e==1){
// //                 cout<<"YES\n";
// //             }
// //             else{
// //                 cout<<"NO\n";
// //             }
// //         }
// //         else{cout<<"YES\n";}
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h> 
// using namespace std; 
// #define int long long

// void fast_io() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
// }

// signed main() {
//     fast_io(); 
//     int t;cin>>t;
//     char a;
//     int o=1;
//     for(o;o<=t;o++){
//         int n;cin>>n;
//         int i,j;
//         int b=0;
//         int e=0;
//         int f=0;
//         int g=0;
//         int k=1;
//         int c=0;
//         int l=0;
//         int q=0;
//         string s="";
//         for(int y=0;y<n;y++){
//             for(int x=0;x<n;x++){
//                 cin>>a;
//                 s+=string(1,a);
//                 if(a=='#' and b==0){
//                     i=x;
//                     j=y;
//                     b=1;
//                     c++;
//                 }
//                 // if(b==2){continue;}
//                 else if(a=='#'){
//                     if(x==i+1 and y==j){
//                         k++;
//                     }
//                     if(x==i and y==j+1){
//                         k++;
//                     }
//                     if(x==i+1 and y==j+1){
//                         k++;
//                     }
//                     c++;
//                     if(abs(abs(x-i)-y+j)>1){
//                         b=2;
//                     }
//                     else if(f==0){
//                         f=abs(x-i)-y+j;
//                     }
//                     if(l==1 and x==i and q==0){
//                         f=-1;
//                         q=1;
//                     }
//                     else if(l==1 and x==i-1 and q==0){
//                         f=-1;
//                         q=1;
//                     }
//                     if(g==0){
//                         if(x!=i and y!=j){
//                             if(x>i){
//                                 g=2;
//                             }
//                             else{
//                                 g=1;
//                             }
//                         }
//                         else if(l==1){
//                             if(x==i){
//                                 g=1;
//                             }
//                             else{
//                                 g=2;
//                             }
//                         }
//                     }
//                     if(x==i and g==0){
//                         continue;
//                     }
//                     if(y==j and g==0){
//                         l=1;
//                         continue;
//                     }
//                     else{
//                         if(bool(x>i)!=g-1){
//                             e++;
//                         }
//                         else if((abs(x-i)-y+j)!=f and (abs(x-i)-y+j)!=0 ){
//                             // cout<<g<<'a'<<f<<x<<y;
//                             e++;
//                         }
//                     }
//                 }
//             }
//         }
//         //if(o==80){cout<<s;}
//         if(b==2){
//             cout<<"NO\n";
//         }
//         else if(c==4 and k==4){
//             cout<<"YES\n";
//         }
//         else if(k==4 and c!=4){
//             cout<<"NO\n";
//         }
//         else if(e>0){
//             cout<<"NO\n";
//         }
//         else{
//             cout<<"YES\n";
//         }
//     }
//     return 0;
// }
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
        int n;cin>>n;
        int i1=0;
        int j1=0;
        int i2=0;
        int j2=0;
        char a;
        int b=0;
        int g=0;
        int c=0;
        int k=0;
        int e=0;
        string s="";
        for(int y=0;y<n;y++){
            for(int x=0;x<n;x++){
                cin>>a;
                s+=string(1,a);
                if(a=='#' and b==0){
                    i1=x;
                    j1=y;
                    b=1;
                }
                else if(a=='#'){
                    if(abs(abs(x-i1)-y+j1)>1){
                        b=3;
                    }
                    if(abs(x-i1)-abs(y-j1)==0 and g==0){
                        if(x>i1){
                            g=2;
                        }
                        else{g=1;}
                    }
                    else if(bool(x>i1)!=g-1 and g!=0){
                        b=3;
                    }
                    else if(abs(x-i1)-abs(y-j1)==0 and bool(x>i1)==g-1){
                    }
                    else if(c==0){
                        i2=x;
                        j2=y;
                        c=1;
                        if(g==0 and x!=i1 and y!=j1){
                            if(x>i1){
                                g=2;
                            }
                            else{g=1;}
                        }
                    }
                    else if(abs(x-i2)-abs(y-j2)==0 and g==0){
                        if(x>i1){
                            g=2;
                        }
                        else{g=1;}
                    }
                    else if(abs(x-i2)-abs(y-j2)==0 and bool(x>i2)==g-1){
                    }
                    else{
                        b=3;
                    }
                }
                if(a=='#'){
                    e++;
                    if(x==i1 and y==j1){
                        k++;
                    }
                    else if(x==i1+1 and y==j1){
                        k++;
                    }
                    else if(x==i1+1 and y==j1+1){
                        k++;
                    }
                    else if(x==i1 and y==j1+1){
                        k++;
                    }
                }
            }
        }
        if(u==364){
            cout<<s;
        }
        if(k==4 and e==4){
            cout<<"YES";
        }
        else if(b==3){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}