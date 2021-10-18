// Borze
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  string in, out;

  cin >> in;

  for (int i = 0; i < in.size(); i++) {
    if (in[i] == '.') {
      out += '0';
    } else if (in[i] == '-' && in[i + 1] == '.') {
      out += '1';
      i++;
    } else if (in[i] == '-' && in[i + 1] == '-') {
      out += '2';
      i++;
    }
  }

  cout << out << endl;
  return 0;
}