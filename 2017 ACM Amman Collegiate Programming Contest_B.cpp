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
    string a, b;
    int cnt[10001];

cin >> n;
 for (int i = 1; i <= n; i++) {
 int ans = 0;
 memset (cnt, 0, sizeof (cnt));
 cin >> a >> b;
   
   for (int j = 0; j < b.size(); j++)
     cnt[b[j]]++;
   
   for (int j = 0; j < min(a.size(), b.size()); j++)  
     {
       if (cnt[a[j]] > 0){
      ans++; cnt [a[j]]--; } 
       else
        {
        break;	
        	
        }
     
     	
     } 	 
     cout << ans <<endl;
 }
 
return 0;
}