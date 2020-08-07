#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n, min = INT_MAX, pos, counter = 0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] <= min){
            min = arr[i];
            pos = i+1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] == min){
            counter++;
        }
    }
    if(counter > 1)
        cout<<"Still Rozdil";
    else
        cout<<pos;    
}