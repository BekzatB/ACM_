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
    int n;
    int a,b;
cin >> n;
  for (int i = 1; i <= n; i++) {
  cin >> a >> b;
    if (a % 2 == 1 || b % 2 == 1)
      cout << "hasan" << endl;
     else
       cout << "abdullah" << endl;
  }  
  	
  
return 0;
}