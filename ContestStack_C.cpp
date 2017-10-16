#include <bits/stdc++.h>
	using namespace std;
	     
int main () {

string s;
cin >> s;
	int j = 0;
	char ans[100005];
	for (int i = 0; i < s.size(); i++)
	{	
	ans[++j] = s[i];
	
	if (j > 1 && ans[j] == ans[j - 1]) {
	//cout << ans[j] << " " << j << endl;
	 j -= 2; }
	 
	}

	if (j == 0) cout << "Yes";
	else cout << "No";


return 0;}