#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0); cin.tie(NULL);
  string s;
  int lucky_numbers = 0;

  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '7' || s[i] == '4') {
      lucky_numbers++;
    }
  }

  if (lucky_numbers == 4 || lucky_numbers == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO " << endl;
  }

  return 0;
}