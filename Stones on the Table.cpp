#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0); cin.tie(NULL); 

  int n = 0, m = 0;
  string s;

  cin >> n >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == s[i + 1]) {
      m++;
    }
  }

  cout << m << endl;

  return 0;
}