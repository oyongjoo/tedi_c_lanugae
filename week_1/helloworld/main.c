#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1 = FLT_MIN;
	float num2 = FLT_MAX;
	double num3 = DBL_MIN;
	double num4 = DBL_MAX;
	long double num5 = LDBL_MIN;
	long double num6 = LDBL_MAX;

	printf("%d %d %d\n", sizeof(float), sizeof(double), sizeof(long double));

	printf("%.40f %.2f\n", num1, num2);
	printf("%e %e\n", num3, num4);
	printf("%Le %Le\n", num5, num6);

	return 0;
}
