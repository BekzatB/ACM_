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
    int a,b,c;
    int mn = -1;
    cin >> n;
      for (int i = 1; i <= n; i++) {
      	mn = -1;
     cin >> a >> b >> c;
       mn = min (a, min(b,c));
       if (mn == a){
         cout << "First" << endl; continue;}
       if (mn == b){
         cout << "Second" << endl; continue;}
         else
         cout << "Third" << endl;
      	
      }

return 0;
}