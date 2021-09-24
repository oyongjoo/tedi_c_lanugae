#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	char c;
	
	scanf("%d %d %c", &n, &m, &c);
	
	switch (c) {
		case '+':
			printf("%d\n", n + m);
			break;
		case '-':
			printf("%d\n", n - m);
			break;
		case '*':
			printf("%d\n", n * m);
			break;
	}
	
	return 0;
}
