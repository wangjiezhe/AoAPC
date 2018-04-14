#include <stdio.h>

int main() {
  int a, b, c;
  int ind = 1;
  while (scanf("%d%d%d", &a, &b, &c) == 3) {
    int ans = 0;
    for (int i = 10; i <= 100; ++i) {
      if (i % 3 == a &&
          i % 5 == b &&
          i % 7 == c) {
        printf("Case %d: %d\n", ind, i);
        ans = 1;
        break;
      }
    }
    if (!ans) {
      printf("Case %d: No answer\n", ind);
    }
    ind += 1;
  }
}