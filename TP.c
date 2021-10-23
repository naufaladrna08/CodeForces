#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n1, n2, i;
  int total1 = 0, total2 = 0;
  
  scanf("%d", &n1);
  char x[n1];

  for (int i = 0; i < n1; i++) {
    scanf(" %c", &x[i]);

    int r = (int) x[i] - 64;
    if (r > 9 && r < 18)
      r = r - 9;
    else if (r > 18 && r < 27)
      r = r - 18;

    total1 += r;
  }

  scanf("%d", &n2);
  int y[n2];

  for (int i = 0; i < n2; i++) {
    scanf(" %d", &y[i]);
    total2 += y[i];
  }

  if (n1 == n2) {
    for (int i = 0; i < n1; i++) {
      printf("%c %d ", x[i], y[i]);
    }

    if (total1 == total2) {
      printf("\nNilai kartu mereka sama,\n");
      printf("Ada rasa suka di antara mereka.\n");
    } else {
      printf("\nNilai kartu mereka tidak sama,\n");
      printf("Mereka cukup berteman saja.\n");
    }
  } else {
    printf("Jumlah kartu mereka tidak sama,\n");
    printf("Pertemanan mereka tidak akan serasi.\n");
  }

  return 0;
}
