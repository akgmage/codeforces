#include<bits/stdc++.h>
using namespace std;
const int N = int(1e5 + 3);
int main(){
    int n; 
    long long int count1=0,count2=0;
    cin>>n;
    int arr[N];
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr[x] = i+1;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        count1 +=  arr[y];
        count2 += n - arr[y] + 1;
    }    
    cout<<count1<<" "<<count2<<endl;
    return 0;
}