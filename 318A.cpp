#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, k, ans=0;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n/2){
            ans = 1 + (2 * (k - 1));
        }
        else{
            ans = 2 * (k - (n / 2));
        }
    }
    else{
        if(k <= (n/2 + 1)){
            ans = 1 + (2 * (k - 1));
        }
        else{
            ans = 2 * (k - (n/2 + 1));
        }
    }
    cout<<ans;
    return 0;
}