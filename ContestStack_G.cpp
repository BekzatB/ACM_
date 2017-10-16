#include <bits/stdc++.h>
 
using namespace std;

int cnt[1000001];

string s;

vector<int> pos;
vector<pair<int, int>> all;

int main() {
    
 cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') pos.push_back(i);
    else {
      if (pos.empty() || s[pos.back()] != '(') pos.clear();
      else {
        while (!all.empty() && pos.back() <= all.back().first && all.back().second <= i)
          all.pop_back();

        if (!all.empty() && all.back().second + 1 == pos.back())
          all[all.size() - 1].second = i;
        else 
          all.push_back(make_pair(pos.back(), i));
        
        pos.pop_back();
      }
    }
  }
  for (auto i : all)
    cnt[i.second - i.first + 1]++;

  cnt[0]++;
  for (int i = s.size(); i >= 0; i--) {
    if (cnt[i]) {
      printf("%d %d", i, cnt[i]);
      return 0;
    }  
  }
  return 0;
}