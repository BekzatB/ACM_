#include <bits/stdc++.h>
#include <queue>
 
using namespace std;
int main() {

	double v1, v2, a1, a2, v3, tim, ans, d, t1, t2,n;
	double  t;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> v1 >> v2 >> v3 >> a1 >> a2;
	
		t1 = v1 / a1;
		t2 = v2 / a2;

		t = max(t1, t2);
		
		ans = t * v3;
		double ans1=((v1*t1)-.5*a1*t1*t1)+((v2*t2)-.5*a2*t2*t2);
		printf("Case %d: %.6lf %.6lf\n", i + 1, ans1, ans);

	}

	return 0;

}
