#include <stdio.h>
#include <math.h>

int main() {
	double E0, omega, C, L, R;
	scanf("%lf%lf%lf%lf%lf", &E0, &omega, &C, &L, &R);
	double delta_sqr = R*R / 4.0 / L/L;
	double omega0_sqr = 1.0 / L / C;
	double omega_sqr = omega * omega;
	double res = E0 / L / sqrt((omega0_sqr - omega_sqr)*(omega0_sqr - omega_sqr) + 4.0 * omega_sqr * delta_sqr);
	printf("%.10f", res);
	return 0;
}
