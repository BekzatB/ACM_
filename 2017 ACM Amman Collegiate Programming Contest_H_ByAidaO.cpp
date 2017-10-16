#include <functional>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <sstream>
#include <numeric>
#include <string>
#include <vector>
#include <cstdio>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>


using namespace std;
#define sz(a) (int)a.size()
#define vi vector <int>
#define pb push_back
#define mp make_pair
#define ll long long        
#define sc scanf
#define pf printf    
#define f first
#define s second

   
const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);
   
const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// //////

int main(){
	int t;
	cin  >> t;
	for (int i = 0; i < t; ++i) {
		int n, s;
		cin >> n >> s;
		if (s % 2 !=  0 || n % 2 != 0) {
			cout << -1 << endl;
			continue;
		}
		s /= 2;
		int c = s / 9;
		if ( (c > n) || ((c == n) && s%9 != 0)) {
			cout << -1 << endl;
			continue;
		}
		if (c == 0){
			if ((s%9) - ((n/2 - c) - 1) == 0){
				cout << -1 << endl;
				continue;
			}
			cout << (s%9) - ((n/2 - c) - 1);
			for (int i = 0; i < 2 * ((n/2- c) - 1); ++i) {
				cout << 1;
			}

			cout << (s%9) - ((n/2 - c) - 1);
			cout << endl;
			continue;
		} 
		else if (((c == n) && s%9 == 0)) {
			for (int i = 0; i < 2*c ; ++i) {
				cout << 9;
			}
			cout << endl;
			continue;
		}
		else if ((c < n) && ( n/2 - c <= s% 9)) {
			for (int i = 0; i < c; ++i) {
				cout << 9;
			}
			if (n/2 - c > 1){
			cout << (s%9) - ((n/2 - c) - 1);
			for (int i = 0; i < 2 * ((n/2- c) - 1); ++i) {
				cout << 1;
			}

			cout << (s%9) - ((n/2 - c) - 1);
			
			}
			else{
				cout << (s%9) - (n/2 - c) + 1;

				cout << (s%9) - (n/2 - c) + 1;
			}
			for (int i = 0; i < c; ++i) {
				cout << 9;
			}
			cout << endl;
			continue;
		}
	}
	return 0;
}   
close