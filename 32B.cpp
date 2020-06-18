#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<char> a;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i == 0 && s[i] == '.'){
            a.push_back('0');
        }
        else if(i > 0 && s[i] == '.' && s[i-1] == '.'){
            a.push_back('0');
        }
        if(i > 0 && s[i] == '.' && s[i-1] == '-' && s[i-2]=='-'){
            a.push_back('0');
        }
        else if(s[i]=='-' && s[i+1] == '.'){
            a.push_back('1');
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            a.push_back('2');
            i++;
        }    
    }
    for(int i=0;i<a.size();i++)
        cout<<a[i];
    return 0;
}