#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0); cin.tie(NULL);

  int lower = 0, upper = 0;
  string s;

  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (isupper(s[i])) {
      upper++;
    } else {
      lower++;
    }
  }

  if (upper > lower) {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { 
      return std::toupper(c); 
    });
  } else {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { 
      return std::tolower(c); 
    });
  } 

  cout << s << endl;

  return 0;
}