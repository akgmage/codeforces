#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3], b[3], c[3],x[3]={1,1,1},y[3]={1,1,1},z[3]={1,1,1};

    for(int i=0;i<3;i++)
        cin>>a[i]>>b[i]>>c[i];

    if(a[0]%2 != 0){ 
        x[0] = !x[0];
        x[1] = !x[1];
        y[0] = !y[0];
    }
    if(a[1]%2 != 0){
        x[0] = !x[0];
        x[1] = !x[1];
        x[2] = !x[2];
        y[1] = !y[1];    
    }
    if(a[2]%2 != 0){
        x[2] = !x[2];
        x[1] = !x[1];
        y[2] = !y[2];
    }
    if(b[0]%2 != 0){
        x[0] = !x[0];
        z[0] = !z[0];
        y[0] = !y[0];
        y[1] = !y[1];
    }
    if(b[1]%2 != 0){
        y[0] = !y[0];
        y[1] = !y[1];
        y[2] = !y[2];
        x[1] = !x[1];
        z[1] = !z[1];
    }
    if(b[2]%2 != 0){
        y[2] = !y[2];
        y[1] = !y[1];
        x[2] = !x[2];
        z[2] = !z[2];
    }
    if(c[0]%2 != 0){
        z[0] = !z[0];
        y[0] = !y[0];
        z[1] = !z[1];
    }
    if(c[1]%2 != 0){
        z[0] = !z[0];
        z[1] = !z[1];
        z[2] = !z[2];
        y[1] = !y[1];
    }   
    if(c[2]%2 != 0){
        z[2] = !z[2];
        z[1] = !z[1];
        y[2] = !y[2];
    }
    for(int i=0;i<3;i++)
        cout<<x[i]<<y[i]<<z[i]<<endl;        
return 0;
}