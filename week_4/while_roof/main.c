#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int fare;
	
	scanf("%d", &fare);
	
	while (fare >= 1200) {
		fare -= 1200;	
		//if (fare < 0) break;
		printf("%d\n", fare);
	}
	
	return 0;
}
