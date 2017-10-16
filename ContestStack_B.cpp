От axaxa, соревнование: [2017] KBTU Juniors - stack queue, задача: (B) Минимальная строка, Полное решение, #
 // axaxa, Slowpoker, MC_Sailaubek #tbt
#include <iostream>
#include <fstream>
#include <cstdio>
#include <math.h>
#include <queue>
#include <map>
#include <set>
#include <stack>
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
    char suff[100000];
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (i == s.size() - 1)
           suff[i] = s[i];
         else 
           suff[i] = min(suff[i + 1], s[i]);
        }

    string ans;
    stack <char> st;
    for (int i = 0; i < s.size(); i++) {
        while (st.size() > 0 && (st.top()) <= (suff[i])) {
              ans += st.top();
              st.pop();        
        }
        st.push(s[i]);
    }
    while (st.size() > 0) {
          ans += st.top();
          st.pop();        
    }
      cout << ans;


return 0;
}