#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int flag = 1;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
			i+=2;
			if(flag == 0){
				cout << " ";
			}
		}
		else{
			cout << s[i];	
			flag = 0;		
		}
	}
return 0;
}
