#include <bits/stdc++.h>
using namespace std;

/*
 * 2, 3, 7, 11
 *
 * 2 % 1
 */

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0); cin.tie(NULL); 
  int a = 0, n = 0, m = 0, prev = 0, c = 0;

  cin >> n >> m;

  for (int i = 2; i <= m / 2; ++i) {
    if (m % i == 0) {
      a = 1;
      break;
    }
  }

  for (int i = 1; i < m; i++) {
    c = 0;

    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        c = c + 1;
      }
    }

    if (c == 2)
		  prev = i;
  }

  /* Jika si m adalah bilangan prima setelah n */
  if (a == 0 && n == prev) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  // cout << m << "==" << prev << endl;

  return 0;
}