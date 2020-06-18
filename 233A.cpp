#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
    if(n%2==0){
        for(int i=1;i<=n;i++)
            a[i] = i;
        for(int i=1;i<n;i=i+2){
            int temp = i;
            a[i] = a[i+1];
            a[i+1] = temp;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
    }
    else 
        cout<<"-1";
    return 0;
}