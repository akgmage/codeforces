#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, flag, ans=0;
    vector<int> a;
    cin>>n>>m;
    int temp = n+1;
    for(int i = temp; i<=1000; i++){
        if(i == 0 || i == 1) continue;
        flag = 1;
        for(int j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            a.push_back(i);
        }    
    }
    if(a[0] == m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;    

return 0;
}