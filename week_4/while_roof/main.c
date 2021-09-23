#include <stdio.h>

int main() {
	unsigned char i = 1;
	while (i != 0) {		// while에 true를 지정하면 무한루프
		printf("%u\n", i);
		i <<= 1;
	}
	
	return 0;
}
