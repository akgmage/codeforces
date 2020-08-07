#include<bits/stdc++.h>
using namespace std;
int main(){
    int ln = 0, rn = 0,  lo = 0,  up = 0;
    int n, ans=0, count=0;
    cin>>n;
    int left[n], right[n];
    for(int i=0;i<n;i++){
        cin>>left[i]>>right[i];
    }
    for(int i=0;i<n;i++){
        for(int j = 0; j < n; j++){
            if(i==j)
                continue;
            if(left[i] < left[j] && right[i] == right[j]){
                ln = 1;
               // break;
            }
            else if(left[i] > left[j] && right[i] == right[j]){
                rn=1;
                //break;
            }
            else if(left[i] == left[j] && right[i] < right[j]){
                lo=1;
                //break;
            }
            else if(left[i] == left[j] && right[i] > right[j]){
                up = 1;
                //break;
            }
        }
        if(ln == 1 && rn == 1 && lo == 1 && up == 1){
            ans+=1;
        }
        ln = rn = lo = up = 0;
    }
    cout<<ans;
    return 0;
}