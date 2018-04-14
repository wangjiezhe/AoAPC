#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int len = n * 2 - 1;
  for (int i = n; i > 0; --i) {
    int mid = i * 2 - 1;
    int lr = (len - mid) / 2;
    for (int j = 0; j < lr; ++j) {
      printf(" ");
    }
    for (int j = 0; j < mid; ++j) {
      printf("#");
    }
    for (int j = 0; j < lr; ++j) {
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}