#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char *argv[]) {
	float num1;
	double num2;
	long double num3;
		
	printf("실수를 입력하세요: ");
	scanf("%f", &num1);		// 실수를 입력받아서 변수에 저장
	
	printf("double 실수를 입력하세요: ");
	scanf("%lf", &num2);    // 자료형이 double일 때는 %lf
	
	printf("long double 실수를 입력하세요: ");
	scanf("%Lf", &num3);    // 자료형이 long double일 때는 %Lf
	
	printf("%f %f %Lf\n", num1, num2, num3);	// 변수의 내용을 출력
	
	return 0;
}
