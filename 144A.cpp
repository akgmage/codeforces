#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max = arr[0], min = arr[0], maxi=0, mini=0;
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            maxi = i;    
        }
    }    
    
    for(int i=maxi;i>0;i--){
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
        count++;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] <= min){
            min = arr[i];
            mini = i;
        }    
    }
    for(int i=mini;i<n-1;i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        count++;
    }
       
    cout<<count<<endl;
    return 0;
}