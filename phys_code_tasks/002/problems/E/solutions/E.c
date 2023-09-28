#include <stdio.h>
#include <math.h>

int main() {
	double n, res1, res2;
	scanf("%lf", &n);
	res1 = n * 0.03;
	res2 = n * 0.02;
	printf("%.5f %.5f", res1, res2);
	return 0;
}
