#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
string str = to_string(n);
int i = 0;
while(1){
	if(str[i] == '1' && str[i+1] == '4' && str[i+2] == '4')
		i += 3;
	else if(str[i] == '1' && str[i+1] == '4')
		i += 2;
	else if(str[i] == '1')
		i++;
	else{
		cout << "NO" <<endl;
		break;
	}			
	if(i == str.size()){
		cout << "YES" << endl;
		break;
	}	
}
return 0;
}
