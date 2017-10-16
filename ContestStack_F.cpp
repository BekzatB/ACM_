#include <bits/stdc++.h>
using namespace std;
     
    int main() {
    string s;
    stack < char > st;
    int ans = 0;
	cin >> s;
    for (int i = 0; i < s.size(); i++){
      if (s[i] == '(') st.push('(');
      else
       if (st.empty() == 0 && st.top() == '(') st.pop();
       else
       ans++;
}  
  cout <<s.size() -  ans  - st.size();
}