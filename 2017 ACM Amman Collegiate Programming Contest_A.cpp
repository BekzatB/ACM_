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
	
	int n,m;
	int was[100001];
	string s[100001];
	int f;
	
	cin >> n;
	  for (int i = 1; i <= n; i++) {
	cin >> m;
	int mx = -1;
	int mn =  100000;
	memset(was, 0, sizeof(was));
	   for (int i = 1; i <= m; i++) {
	  
	   cin >> s[i] >> f;
	     was[f]++;
	    if (was[f] >= mx ) {
	   	
	       if (was[mn] == was[f])	
	       mx = was[f], mn = min(f,mn);
	       else
	        mx = was[f], mn = f; 
	        } 

	    }
	       cout << mn << endl;
	        
	   
	   }  
	  
} 
  