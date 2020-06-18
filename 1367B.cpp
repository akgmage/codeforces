#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a = 0, b=0;
        cin>>n;
        for(int i = 0; i < n;i++){
            int num;
            cin>>num;
            if(num % 2 != i % 2 ){
                if(i % 2 == 0)    
                    a++;
                else
                    b++;
            }
        }
        if(a != b) cout<<"-1"<<endl;
        else cout<<a<<endl;
    }    
    return 0;
}