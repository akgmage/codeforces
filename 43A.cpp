#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s1 = "";
	string s2 = ""; 
	string s3 = "";
	int flag = 0;
	cin >> n;
	vector<string> s(n);
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	s3 = s[0];
	for(int i = 0; i < n-1; i++){
		if(s[i].compare(s[i+1]) != 0){
			s1 += s[i];
			s2 += s[i+1];
			break;
		}
	}
	for(int i = 0; i < n-1; i++){
		if(s[i].compare(s[i+1]) != 0){
			flag = 1;
		}
	}
	if(n == 1){
		cout << s[0] << endl;
		return 0; 
	}
	if(flag == 0){
		cout << s[0] << endl;
		return 0;
	}
	int c1 = 0, c2 = 0;
	for(int i = 0; i < n; i++){
		if(s1.compare(s[i]) == 0) c1++;
		if(s2.compare(s[i]) == 0) c2++;
	}
	if(c1 >= c2){
		cout << s1 <<endl;
	}
	else {
		cout << s2 <<endl;
	}
	return 0;
}
