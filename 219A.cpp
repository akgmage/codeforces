#include<bits/stdc++.h>
using namespace std;
int main(){
	int k, t;
	cin >> k;
	t = k;
	string s;
	cin >> s;
	int temp[27] = {0};
	for(int i = 0; i < s.size(); i++){
		temp[s[i]-'0'-48]++;
	}
	for(int i = 1; i <= 26; i++){
		if(temp[i] == 0)
			continue;
		if(temp[i] % k != 0){
			cout << "-1" << endl;
			return 0;	
		}	
	}	
	string buildt = "";
	string res = "";
	for(int i = 1; i <= 26; i++){
		if(temp[i] != 0){
			for(int j = 0; j < temp[i]/k; j++){
				char c = i + 96;
				buildt += c;
			}	
		}	
	}
/*
		for(int i = 1; i <= 26; i++){
			if(temp[i] != 0){
				char c = i+96;			
				ans += c;
			}
		}
*/
	while(k){
		res += buildt;
		k--;
	}

	cout << res;
	return 0;
}
