#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1, num2, num3;
	float num4 = 1.7f;
	double num5 = 232.34234;
	long double num6 = 12.3234e+102;
	
	printf("정수 세 개를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	printf("%d\n%d\n%d\n", num1, num2, num3);
	
	printf("%f %f %Lf", num4, num5, num6);
	return 0;
}
