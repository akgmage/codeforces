#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, m;
	long long count = 0, ans = 0, similar = 0;
	cin >> n >> m;
	long long arr[m];
	for(int i = 0; i < m; i++)
		cin >> arr[i];
		
	ans = arr[0] - 1;
	 	for(long long i = 1; i < m; i++){
	 		if(arr[i] >= arr[i-1]){
	 			ans += arr[i] - arr[i-1];
	 		}
	 		else{
	 			ans += (n - arr[i-1]) + arr[i];
	 		}
	 	}
	 	cout << ans << endl;
	return 0;	
}
