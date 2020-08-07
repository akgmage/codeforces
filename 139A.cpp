#include<bits/stdc++.h>
using namespace std;
int arr[7];
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<7;i++)
        cin >> arr[i];
    int i = 0;
    while(sum < n){
        sum += arr[i];
        i++;
        if(i > 6)
            i = 0;    
    }    
    if(i==0)
        i=7;
    cout<<i;
}














