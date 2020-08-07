#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2, s3;
    int temp1[26]={0};
    int temp2[26]={0};
    int count = 0;
    cin>>s1>>s2>>s3;
    for(int i=0;i<s1.size();i++)
        temp1[s1[i]-65]++;
    
    for(int i=0;i<s2.size();i++)
        temp1[s2[i]-65]++;
    
    for(int i=0;i<s3.size();i++)
        temp2[s3[i]-65]++;
    
    for(int i=0;i<26;i++){
        if(temp1[i] == temp2[i])
            count++;
    }
    if(count == 26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;                    
return 0;
}