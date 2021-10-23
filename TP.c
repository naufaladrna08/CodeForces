#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n1, n2, i;
  int nemu = 0;

  scanf("%d", &n1);
  char x[n1];

  for (int i = 0; i < n1; i++) {
    scanf(" %c", &x[i]);
  }

  scanf("%d", &n2);
  int y[n2];

  for (int i = 0; i < n2; i++) {
    scanf(" %d", &y[i]);
  }

  if (n1 == n2) {
    for (int i = 0; i < n1; i++) {
      int res = (int) x[i] - 64;
    
      if (res > 9) {
        res = res - 9;
      }

      if (res == y[0]) {
        nemu++;
      }
    }

    for (int i = 0; i < n1; i++) {
      printf("%c %d ", x[i], y[i]);
    }

    if (nemu == 1) {
      printf("\nNilai kartu mereka sama.\n");
      printf("Ada rasa suka di antara mereka.\n");
    } else {
      printf("\nNilai kartu mereka tidak sama.\n");
      printf("Mereka cukup berteman saja.\n");
    }
  } else {
    printf("Jumlah kartu mereka tidak sama\n");
    printf("Pertemanan mereka tidak akan serasi.\n");
  }

  return 0;
}