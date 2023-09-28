#include <stdio.h>
#include <math.h>

double func(double x, double p, double q, double r) {
	return 1.0 / x * sin(M_PI*x/2.0) - p*x*x + q*x - r;
}

int main() {
	double p, q, r, a, b;
	scanf("%lf%lf%lf%lf%lf", &p, &q, &r, &a, &b);
	double res = 0.0, dx = 0.0000001;
	if (a*b > 0) {
		for (; a < b; a+= dx)
			res += dx * func(a, p, q, r);
	} else {
		for (; a < -0.000001; a+= dx)
			res += dx * func(a, p, q, r);
		a = 0.000001;
		for (; a < b; a+= dx)
			res += dx * func(a, p, q, r);
	}
	printf("%.3f", res);
	return 0;
}
