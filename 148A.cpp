#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    bool arr[d] = {false};
    if(k==1 || l==1 || m==1 || n==1){
        for(int i=0;i<d;i++)
            arr[i] = true;
        cout<<d;        
    }
    else{
        for(int i=1;i<d;i++){
            if((i+1) % k == 0)
                arr[i] = true;
            if((i+1) % l == 0)
                arr[i] = true;
            if((i+1) % m == 0)
                arr[i] = true;
            if((i+1) % n == 0)
                arr[i] = true;    
        }
        for(int i=0;i<d;i++){
            if(arr[i] == true)
                count++;
        }
        cout<<count;
    }

    return 0;        
}