#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	for (int i = 1; i <= 20; i++) {
		if (i % 3 == 0 && i % 5 ==0) {
			printf("FizzBuzz\n");
			continue;
		} else if (i % 3 == 0) {
			printf("Fizz\n");
			continue;
		} else if (i % 5 == 0) {
			printf("Buzz\n");
			continue;
		} else
			printf("%d\n", i);
	}
	return 0;
}
