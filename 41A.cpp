#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string t;
	cin >> s;
	cin >> t;
	reverse(t.begin(), t.end());
if(s.compare(t) == 0)
	cout << "YES" <<endl;
else
	cout << "NO" <<endl;	

}
