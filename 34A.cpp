#include<bits/stdc++.h>
using namespace std;
int main(){
    int min = INT_MAX;
    int n,pos1,pos2;
    cin >> n;
    vector<int> myvec(n);
    for(int i=0;i<n;i++)
        cin >> myvec[i];
    for(int i=0;i<n-1;i++){
        int temp = abs(myvec[i] - myvec[i+1]);
        if(temp < min){
            min = temp;
            pos1 = i+1;
            pos2 = i+2;
        }    
    }
    int temp = abs(myvec[n-1] - myvec[0]);
    if(temp < min){
        min = temp;
        pos1 = n;
        pos2 = 1;
    }    
    cout<<pos1<<" "<<pos2<<endl;
    return 0;    
}