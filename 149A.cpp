#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	cin >> k;
	int t = k;
	int count = 0, sum = 0;
	vector<int> m(12);
	for(int i = 0; i < 12; i++){
		cin >> m[i];
		sum += m[i];
	}	
	if(sum < k){
		cout << -1 << endl;
		return 0;
	}
	sort(m.begin(),m.end());
	int x = 11;
	while(k>0 && x >= 0){
		k = k - m[x--];
		count++;
	}	
		cout << count << endl;
return 0;
}
