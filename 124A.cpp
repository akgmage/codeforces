#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int ans = n - max(a + 1, n - b) + 1;
	cout << ans << endl;
return 0;
} 
