#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drinks = k * l;
    int total_toast = total_drinks / nl;
    int limes = c * d;
    int salt_req = p / np;
    int ans = min(min(total_toast, limes), salt_req) / n;
    cout<<ans;
    return 0;
}