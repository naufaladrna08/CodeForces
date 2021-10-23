#include <stdio.h>

int to_int(char x) {
  int res = (int) x - 64;
  
  if (res > 9) {
    res = res - 9;
  }

  return res;
}

int main(int argc, char const *argv[]) {
  int n1, n2;

  scanf("%d", &n1);
  char x[n1];

  for (int i = 0; i < n1; i++) {
    scanf(" %c", &x[i]);
  }

  scanf("%d", &n2);
  char y[n2];

  for (int i = 0; i < n2; i++) {
    scanf(" %c", &y[i]);
  }

  int nemu = 0;
  for (int i = 0; i < n1; i++) {
    if (to_int(x[i]) == y[i]) {
      nemu = 1;
    } else {
      nemu = 0;
    }
  }

  for (int i = 0; i < n1; i++) {
    printf("%c %c ", x[i], y[i]);
  }

  printf("\n");

  if (n1 == n2) {
    printf("Nilai kartu mereka sama.\n");
  } else {
    printf("Nilai kartu mereka tidak sama.\n");
  }

  if (nemu) {
    printf("Ada rasa suka di antara mereka.\n");
  } else {
    printf("Mereka cukup berteman saja.\n");
  }

  return 0;
}