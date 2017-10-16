// axaxa, Slowpoker, MC_Sailaubek #tbt
#include <iostream>
#include <fstream>
#include <cstdio>
#include <math.h>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <ctime>
#include <vector>                             


using namespace std;


long long MOD  = 1e9 + 7;

long long binpow (long long  a, long long n) {
	long long  res = 1;
	while (n) {
		if (n & 1){
			res = (res % MOD) * a % MOD;
			res %= MOD;}
		a = (a % MOD) * 1ll * a;
		a %= MOD;
		n >>= 1;
	}
	return res % MOD;
}

int main () {
    #ifndef ONLINE_JUDGE
    freopen (".in", "r", stdin);
    freopen (".out", "w", stdout);
    #endif
    
int n;
int a ,b;
cin >> n;
long long d[100001];

d[0] = 1;
for (int i = 1; i <= 100000; i++){
d[i] = ((d[i - 1] % MOD) * 1ll * i) % MOD;
d[i] %= MOD;

}

for (int i = 1; i <= n; i++) {
cin >> a >> b;
 long long ans = 0;
 a--;
 //cout << d[a] << " " << d[a - b] << " " << d[b] << endl;
 ans = ((d[a] % MOD) * ((binpow(d[a - b], MOD-2) % MOD) * (binpow(d[b], MOD - 2) % MOD))) % MOD;
 
 
 cout << (ans * 2) % MOD<< endl;
}
 
return 0;
}