#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int average = (a+b+c)/3;
	printf("�������: %d - %s\n", average, average >= 60 ? "�հ�": "���հ�");
	
	return 0;
}
