#include <cstdio>
int main () {
	double x, c = 0.0;
	long long n;
	printf("\n\nInforme o angulo: ");
	scanf("%lf", &x);
	for (unsigned i = 0, n = 1; n <= 10; i+=2, n++) {
		long long fat = 1;
		double num = 1.0;
		for (unsigned k = 2; k <= i; fat*=k, k++);
		for (unsigned k = 1; k <= i; num *= x, k++);
		if (n % 2 == 0)
			c -= num / fat;
		else
			c += num / fat;
	}
	printf("\ncos(%.2lf) = %.15e\n", x, c);
	return 0;	
}