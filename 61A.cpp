#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    vector<char> c;
    cin>>a>>b;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i])
            c.push_back('0');
        else
            c.push_back('1');    
    }
    for(int i = 0; i < c.size(); i++)
        cout<<c[i];
    return 0;    
}