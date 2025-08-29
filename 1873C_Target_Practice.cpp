#include <iostream> 
#include <vector>   
#include <algorithm> 
using namespace std; 

void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}

int main() {
    fast_io(); 
    int t;cin>>t;
    while(t--){
        int result=0;
        vector<vector<char>> arr(10,vector<char>(10));
        for(int x=0;x<10;x++){
            for(int y=0;y<10;y++){
                cin>>arr[x][y];
                if(arr[x][y]=='X'){
                    if(x<=4){
                        if(y>=x and y<=9-x){
                            result+=x+1;
                        }
                        else if(y<x){
                            result+=y+1;
                        }
                        else{
                            result+=10-y;
                        }
                    }
                    else{
                        int z=9-x;int a=9-y;
                        if(a>=z and a<=9-z){
                            result+=z+1;
                        }
                        else if(a<z){
                            result+=a+1;
                        }
                        else{
                            result+=10-a;
                        }
                    }
                }
            }
        }
        cout<<result<<"\n";
    }
    return 0;
}