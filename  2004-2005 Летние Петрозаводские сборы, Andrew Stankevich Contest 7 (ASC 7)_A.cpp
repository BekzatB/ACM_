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

int n, a[101][101];

int main () {
 //   #ifndef ONLINE_JUDGE
    freopen ("assign.in", "r", stdin);
    freopen ("assign.out", "w", stdout);
  //  #endif
    
    cin >> n;

    int mx = 100;

    a[0][0] = 0;
    a[0][1] = 1;  
     
     for (int j = 2; j < n; ++j) {
       a[0][j] = mx;
     }
       for (int i = 1; i < n; ++i) 
         for (int j = 0; j < n; j++) {
           if (j == 0) 
             a[i][j] = 1;
           else
              a[i][j] = mx;
        }
          for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
            cout << endl;}
           
                    
	    
    return 0;
}