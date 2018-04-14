#include <stdio.h>

int main() {
  int a, b, c;
  int ind = 1;
  while (scanf("%d%d%d", &a, &b, &c) == 3 && b) {
    double res = (double) a / b;
    printf("Case %d: %.*f\n", ind++, c, res);
  }
}