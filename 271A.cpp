#include<bits/stdc++.h>
using namespace std;
int check(int);
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=10000;i++){
        int x = check(i);
        if(x == 1){
            cout<<i;
            break;
        }
    }
    return 0;
}
int check(int n){
    int a, b, c, d, x;
    a = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    c = n % 10;
    n /= 10;
    d = n % 10;
    if(a==b || a == c || a == d || b == c || b == d || c == d){
        x = 0;
    }
    else
        x = 1;
    return x;    
    
}