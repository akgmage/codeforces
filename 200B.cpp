#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0, x;
    double ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        sum += x;
    }
    printf("%.12lf",(sum/(double)n));

    return 0;
}