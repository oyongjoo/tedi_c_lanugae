#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int average = (a+b+c)/3;
	printf("평균점수: %d - %s\n", average, average >= 60 ? "합격": "불합격");
	
	return 0;
}
