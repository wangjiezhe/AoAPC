#include <stdio.h>

int main() {
  int m, n;   // n<m<10^6
  int ind = 1;
  while (scanf("%d%d", &n, &m) == 2 && n && m && n < m) {
    double sum = 0;
    for (int i = n; i <= m; ++i) {
      // sum += 1.0 / (i * i);    False! Since i^2 maybe larger than 2^16
      sum += 1.0 / i / i;
    }
    printf("Case %d: %.5f\n", ind++, sum);
  }
}