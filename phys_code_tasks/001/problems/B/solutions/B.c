#include <stdio.h>
#include <math.h>

int main() {
  double res, C, L, L_12;
  scanf("%lf%lf%lf", &C, &L, &L_12);
  res = 2.0 * L / C / (L*L - L_12*L_12);
  res *= 1e9;
  res = floor(res + 0.5);
  printf("%.0f\n", res);
  return 0;
}
