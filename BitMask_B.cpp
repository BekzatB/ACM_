#include <bits/stdc++.h>
 
using namespace std;

long long n, i, cnt, sum, t, mn = 1000000001;
long long c[3], b[10], a[10], m[3], v[9];
string s;

void go(long long len)
{
     long long j;
	if (len > n && c[1] == cnt && c[2] == cnt)
	{
		sum = 0;
		for (i = 1; i <= n; i++){
			sum = sum * 10 + b[i];
		}
		if (sum >= t)
			mn = min(mn, sum);
	}else
	if (len > n) return;
	for (j = 1; j <= 2; j++)
	{
			b[len] = m[j];
			c[j]++;
			go(len + 1);
			c[j]--;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
  freopen ("a.in", "r", stdin);
  freopen ("a.out", "w", stdout);
  #endif
	cin >> s;
	n = s.size();
	m[1] = 4; m[2] = 7;
	for (i = 0; i < s.size(); i++) {
		a[i + 1] = s[i] - '0';
		t = t * 10 + a[i + 1];
		}
	v[2] = 74, v[4] = 7744, v[6] = 777444, v[8] = 77774444;
  if (t > 77774444) cout << "4444477777", exit(0);
 	if (t <= v[8]) n = 8;
 	if (t <= v[6]) n = 6;
 	if (t <= v[4]) n = 4;
 	if (t <= v[2]) n = 2;
 	cnt = n / 2;
 	go(1);
 	cout << mn;
}