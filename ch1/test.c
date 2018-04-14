#include <stdio.h>
#include <math.h>

int main() {
  int maxint, minint;
  maxint = 1024 * 1024 * 1024 + 1024 * 1024 * 1023 + 1024 * 1023 + 1023;  // maxint = 2^31-1 > 2*10^9
  minint = -1024 * 1024 * 1024 * 2; // minint = - 2^31
  printf("%d\n%d\n", maxint, minint);
  printf("%d\n", 10 / 3);
  return 0;
}