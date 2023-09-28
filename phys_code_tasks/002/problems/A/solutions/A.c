#include <stdio.h>
#include <math.h>

int main() {
  double x, t, res;
  scanf("%lf%lf", &t, &x);
  res = x * exp(-t);
  printf("%.8f\n", res);
  return 0;
}
