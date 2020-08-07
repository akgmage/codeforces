#include<bits/stdc++.h>
using namespace std;
const int N = 10000;
int main(){
	int n, m;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cin >> m;	
	vector<int> b(m);
	for(int i = 0; i < m; i++)
		cin >> b[i];	

	int arr[N] = {0};

	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(b[i] % a[j] == 0){
				arr[b[i]/a[j]]++;
			}
		}
	}
	for(int i = N-1; i >= 0; i--){
		if(arr[i] != 0){
			cout << arr[i] << endl;
			break;
		}	
	}
	return 0;
}
