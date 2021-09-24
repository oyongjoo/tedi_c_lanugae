#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	
	scanf("%d", &num);
	
	switch (num) {
		case 100:
			printf("PERFECT\n");
			break;
		case 90:
			printf("GREAT\n");
			break;
		case 60:
			printf("GOOD\n");
			break;
		case 30:
			printf("BAD\n");
			break;
		default:
			printf("NICE\n");
			break;
	}
	
	return 0;
}
