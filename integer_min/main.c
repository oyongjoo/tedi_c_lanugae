#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;
	
	printf("%d %d %d %d %d\n", sizeof(num1), sizeof num2, sizeof(num3), sizeof(num4), sizeof(num5));
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	return 0;
}
