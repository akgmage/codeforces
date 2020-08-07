#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;
    set<int> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    int ans = s.size();
    if(ans == 4)
        cout<<"0"<<endl;
    else if(ans == 3)
        cout<<"1"<<endl;
    else if(ans == 2)
        cout<<"2"<<endl; 
    else if(ans == 1)
        cout<<"3"<<endl;

    return 0;
}