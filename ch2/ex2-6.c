#include <stdio.h>

int main() {
  for (int fst = 123; fst <= 321; ++fst) {
    int a = fst / 100;
    int b = fst / 10 - a * 10;
    int c = fst % 10;
//    printf("%d %d %d\n", a, b, c);
    if (b == 0 || c == 0 ||
        a == b || a == c || b == c)
      continue;
    int snd = fst * 2;
    int d = snd / 100;
    int e = snd / 10 - d * 10;
    int f = snd % 10;
    if (e == 0 || f == 0 ||
        d == e || d == f || e == f ||
        a == d || a == e || a == f ||
        b == d || b == e || b == f ||
        c == d || c == e || c == f)
      continue;
//    printf("%d %d %d\n", d, e, f);
    int thd = fst * 3;
    int g = thd / 100;
    int h = thd / 10 - g * 10;
    int i = thd % 10;
    if (h == 0 || i == 0 ||
        g == h || g == i || h == i ||
        a == g || a == h || a == i ||
        b == g || b == h || b == i ||
        c == g || c == h || c == i ||
        d == g || d == h || d == i ||
        e == g || e == h || e == i ||
        f == g || f == h || f == i)
      continue;
//    printf("%d %d %d\n", g, h, i);
    printf("%d %d %d\n", fst, snd, thd);
  }
}