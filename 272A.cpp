#include<bits/stdc++.h>
using namespace std;
const int N = int(1e5 + 3);
int main(){
    int n, x, sum=0, count=0, pos=0, ans=0;
    cin>>n;
    int arr[N]={0};
    for(int i=0;i<n;i++){
        cin>>x;
        sum += x;
    }
    sum += 5;
    int y = n+1;

    for(int i=1;i<=sum;i++){
        arr[i] = 0;
    }
    for(int i=1;i<=sum;i=(i+n+1)){
        arr[i] = 1;
    }
    int lastpos = sum-5;
    for(int i=lastpos+1;i<=sum;i++){
        if(arr[i] == 0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}