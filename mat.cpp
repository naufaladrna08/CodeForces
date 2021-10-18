#include <iostream>
#define AND &&
using namespace std;

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int mat[5][5] = {0};
  int moves = 0;

  /*
   * I adalah baris
   * J adalah kolom
   */

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> mat[i][j];
    }
  }

  /* Process */
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      /* Process mat[baris/i][kolom/j] */
      if (mat[i][j] == 1) {
        while (j < 2) {
          swap(mat[i][j], mat[i][j + 1]);

          j++;
          moves++;
        }

        while (j > 2) {
          swap(mat[i][j], mat[i][j - 1]);

          j--;
          moves++;
        }

        while (i < 2) {
          swap(mat[i][j], mat[i + 1][j]);

          i++;
          moves++;
        }

        while (i > 2) {
          swap(mat[i][j], mat[i - 1][j]);

          i--;
          moves++;
        }
      }
    }
  }

  cout << moves << endl;
  return 0;
}