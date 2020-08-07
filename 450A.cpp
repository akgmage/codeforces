#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    stack<int> s;
    cin>>n>>m;
    int a[n], temp[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp[i] = i;
    }
    int i=0;
    while(1){
        a[i] = a[i] - m;
        if(a[i] <= 0){
            s.push(temp[i]);
            i++;
        }
        else if(a[i] > 0){
            int x = temp[i];
            int y = a[i];
            for(int j=i;j<n-1;j++){
                temp[j] = temp[j+1];
                a[j] = a[j+1];    
            }
            temp[n-1] = x;
            a[n-1] = y;
        }
        if(s.size() == n){
            break;
        }
    }
    cout<<s.top() + 1;
    return 0;
}