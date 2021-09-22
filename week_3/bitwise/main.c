#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	unsigned char num1 = 1;	// 0000 0001
	unsigned char num2 = 3;	// 0000 0011
	
	printf("%d\n", num1 & num2);	// 0000 0001: 01과 11을 비트 AND하면 01이 됨
	printf("%d\n", num1 | num2);	// 0000 0011: 01과 11을 비트 OR하면 11이 됨
	printf("%d\n", num1 ^ num2);	// 0000 0010: 01과 11을 비트 XOR하면 10이 됨
	
	return 0;
}
