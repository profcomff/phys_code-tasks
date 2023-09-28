#include <stdio.h>
#include <math.h>
double I, R1, R2, h, n;

double func(double x) {
	return 1.2566e-6 * I * n * h / 2.0 / M_PI / x;
}

int main() {
	scanf("%lf%lf%lf%lf%lf", &I, &R1, &R2, &h, &n);
	R1 *= 0.01;
	R2 *= 0.01;
	h *= 0.01;
	double res = 0.0, dx = 0.00000001;
	for (; R1 < R2; R1 += dx)
		res += func(R1) * dx;
	printf("%.10f", res);

	return 0;
}
