// Queue at the School
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
  int n, t;
  string s;

  cin >> n >> t >> s;

  while (t--) {
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        s[i]     = 'G';
        s[i + 1] = 'B';
        ++i;
      }
    }
  }

  cout << s << endl;

  return 0;
}