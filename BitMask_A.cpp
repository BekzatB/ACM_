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

int main () {
    #ifndef ONLINE_JUDGE
    freopen (".in", "r", stdin);
    freopen (".out", "w", stdout);
    #endif

	string s;
	cin >> s;

	int ans = 0;
	long long cur = 1;

      for (int i = 0; i < s.size(); i++) {
         cur *= 2;
         ans += cur;
      }    
      cur = 1;
       for (int i = s.size() - 1; i >= 0; i--)  {
         if (s[i] == '4')
            ans -= cur;
          cur *= 2;
        }
          cout << ans;
       
       
	return 0;
}