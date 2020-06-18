#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0;
    cin>>n;
    int left[n], right[n];
    int l0=0,l1=0,r0=0,r1=0;
    for(int i=0;i<n;i++){
        cin>>left[i]>>right[i];
        if(left[i] == 0)
            l0++;
        if(left[i] == 1)
            l1++;
        if(right[i] == 0)
            r0++;
        if(right[i] == 1)
            r1++;
    }
    ans = min(l0,l1) + min(r0,r1);
    cout<<ans;   
    
    return 0;
}