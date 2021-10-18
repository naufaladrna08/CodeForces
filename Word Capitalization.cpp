#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0); cin.tie(NULL);

  string s;

  cin >> s;

  if (islower(s[0])) {
    s[0] = s[0] - 32;
  }

  cout << s << endl;

  return 0;
}