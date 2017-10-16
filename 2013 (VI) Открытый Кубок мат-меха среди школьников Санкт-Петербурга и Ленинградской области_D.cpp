#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() { 
    freopen ("quarth.in", "r", stdin);
	freopen ("quarth.out", "w", stdout);
	int n,t;
	long long d[100];
	cin >> t;
	while (t--){
	cin >> n;
	d[0] = 1;
	d[1] = 1;
	for (int i = 2; i <= n; i++)
	d[i] = ((d[i - 1] % 43) * i) % 43;
	
	cout << d[n] % 43 << endl;}
	return 0;
}