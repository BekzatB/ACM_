#include <bits/stdc++.h>
using namespace std;

 int main() {
 string s;
 int a[1000];
 bool was[1000];
	 
     cin >> s;
     vector < char > v;
	
	for (int i = 0; i < s.size(); i++) {
	    if (i == 0){
	     v.push_back(s[i]);
        continue;}
		if (v.back () == s[i])
		v.pop_back();
		else
		v.push_back(s[i]);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i];
  }