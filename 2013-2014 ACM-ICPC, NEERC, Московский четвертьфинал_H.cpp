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

    int xA, yA, xS, yS;
    int xB,yB;

	cin >> xA >> yA >> xS >> yS;
	cin >> xB >> yB;

	if (max(xA,xS) >= xB && min (xA,xS) <= xB && max(yA,yS) >= yB && min(yA,yS) <= yB)
      cout << "Yes";
	else
	  cout << "No";   

return 0;
}