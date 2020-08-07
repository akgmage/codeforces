#include<bits/stdc++.h>
using namespace std;

int findsum(int sum){
	int ans = 0;
	while(sum){
		int d = sum % 10;
		sum = sum / 10;
		ans += d;
	}
	return ans;
}
int main(){
	int n, flag = 0, sum=0, count=0, zcount=0, fcount=0;
	string str="";
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == 0){
			flag = 1;
			zcount++;
		}
		if(arr[i] == 5){
			fcount++;
		}	
		sum += arr[i];
	}
	if(flag == 0) cout << "-1" << endl;
	else if(flag == 1){
		if(sum < 45){
			cout << "0" <<endl;
			return 0;
		}	
		int maxfive = fcount - (fcount % 9);
		for(int i = 0; i < maxfive; i++){
			str += '5';
		}
		for(int i = 0; i < zcount; i++){
			str += '0';
		}
		cout << str << endl;
	}
	
	return 0;	
}

