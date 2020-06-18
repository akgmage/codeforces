#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(isupper(s[i])) count++;
    }
    if(count <= (s.size() / 2)){
        for(int i = 0; i < s.size(); i++)
            s[i] = tolower(s[i]);
    }
    else{
        for(int i = 0; i < s.size(); i++)
            s[i] = toupper(s[i]);
    }

    cout<<s;
    return 0;
}