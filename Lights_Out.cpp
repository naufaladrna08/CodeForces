#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(0); cin.tie(NULL);
  int mat[3][3];

  cin >> mat[0][0]
      >> mat[0][1]
      >> mat[0][2]
      >> mat[1][0]
      >> mat[1][1]
      >> mat[1][2]
      >> mat[2][0]
      >> mat[2][1]
      >> mat[2][2];

  cout << ((mat[0][0] + mat[0][1] + mat[1][0]) % 2 == 0 ? "1" : "0")
       << ((mat[0][0] + mat[0][1] + mat[0][2] + mat[1][1]) % 2 == 0 ? "1" : "0")
       << ((mat[0][1] + mat[0][2] + mat[1][2]) % 2 == 0 ? "1" : "0") << endl

       << ((mat[0][0] + mat[1][0] + mat[1][1] + mat[2][0]) % 2 == 0 ? "1" : "0")
       << ((mat[0][1] + mat[1][0] + mat[1][1] + mat[1][2] + mat[2][1]) % 2 == 0 ? "1" : "0")
       << ((mat[0][2] + mat[1][1] + mat[1][2] + mat[2][2]) % 2 == 0 ? "1" : "0") << endl

       << ((mat[1][0] + mat[2][0] + mat[2][1]) % 2 == 0 ? "1" : "0")
       << ((mat[1][1] + mat[2][0] + mat[2][1] + mat[2][2]) % 2 == 0 ? "1" : "0")
       << ((mat[1][2] + mat[2][1] + mat[2][2]) % 2 == 0 ? "1" : "0") << endl;

  return 0;
}

/*
 * 0 = Nyala
 * 1 = Mati
 * 2 = Nyala
 * 3 = Mati
 * 4 = Nyala
 * 5 = Mati
 * ...
 * 100
 * 
 * (i % 2 == 0) ? "NYALA" : "MATI"
 * 
 * Nyala itu 0 atau genap.
 * 
 * (*) (*) (*)
 * (*) (*) (*)
 * (*) (*) (*)
 */