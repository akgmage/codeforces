#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, ans = 0;
	cin >> n >> m;
	int a[n];
	vector<int>t(m);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int j = 0;	
	for(int i = 0; i < n; i++){
		if(a[i] < 0)
			t.push_back(a[i]);
	}
	sort(t.begin(),t.end());
	for(int i = 0; i < m; i++)
			ans += abs(t[i]);
	cout << ans << endl;		
	
return 0;
}
