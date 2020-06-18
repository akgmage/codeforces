#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size() > 2){
            for(int i=0;i<s.size()-2;i=i+2){
                cout<<s[i];
            }
        }
        cout<<s[s.size()-2]<<s[s.size()-1]<<endl;
    }
    return 0;
}