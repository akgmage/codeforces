#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, arr[N];
        cin>>n;
        vector<int> odd;
        vector<int> even; 
        for(int i=1;i<=2*n;i++){
            cin>>arr[i];
            if(arr[i] % 2)
                odd.push_back(i);
            else
                even.push_back(i);    
        }
        
        vector<pair<int,int> > ans;

        
        for(int i=0;i+1<odd.size();i=i+2)
            ans.push_back({odd[i], odd[i+1]});

        for(int i=0;i+1<even.size();i=i+2)
            ans.push_back({even[i], even[i+1]});
        
        
        for(int i=0;i<n-1;i++)
            cout<<ans[i].first<<" "<<ans[i].second<<endl;        
    }
return 0;
}