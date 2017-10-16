#include <bits/stdc++.h>
 
using namespace std;

int n, m, k;

long long c[29][29], dp[29][300000], ans;

int _len(int x) {
	int len = 0;
	for (int i = 0; i < n; i++) {
		if ((x & (1 << i)) > 0) {
			len++;
		}	                     
	}			
	return len;
}

int main() {

	#ifndef ONLINE_JUDGE
		freopen(".in", "r", stdin);
		freopen(".out", "w", stdout);
	#endif

	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++) {
		cin >> c[i][0];
		dp[i][(1 << (i - 1))] = c[i][0];
	}
	for (int i = 1; i <= k; i++) {
		int x, y;		
		cin >> x >> y;
		cin >> c[x][y];
	}
	for (int mask = 1; mask < (1 << n); mask++) {
		for (int j = 0; j < n; j++) {
			if ((mask & (1 << (j))) > 0) {	
				for (int i = 0; i < n; i++) {	
					if ((mask & (1 << i)) == 0) {
						dp[i + 1][(mask^(1 << i))] = max(dp[i + 1][(mask^(1 << i))], dp[j + 1][mask] + c[j + 1][i + 1] + c[i + 1][0]);	
					}	
				}
			}
		}	
	}
	for (int mask = 1; mask < (1 << n); mask++) {
		if (_len(mask) == m) {
			for (int i = 0; i < n; i++) {
				if ((mask & (1 << i)) > 0) {
					ans = max(ans, dp[i + 1][mask]);
				}
			}
		}
	}
	cout << ans;
	return 0;
}