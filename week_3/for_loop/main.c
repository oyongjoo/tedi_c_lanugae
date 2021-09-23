#define __USE_MINGW_ANSI_STDIO 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	unsigned char ch;
	
	scanf("%hhu", &ch);
	
	printf("%c\n", ch);
	
	for (; ch <= 'z'; ch++) {
		printf("%hhu", ch);
	}
	
	return 0;
}
