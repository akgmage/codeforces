#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int flag = 0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;        
}