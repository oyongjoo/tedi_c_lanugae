#include <stdio.h>
#include <math.h>

int main() 
{
	int num1;
	scanf("%d", &num1);
	
	printf("%d ", num1%10);
	num1 /= 10;
	printf("%d ", num1%10);
	num1 /= 10;
	printf("%d ", num1%10);
	num1 /= 10;
	printf("%d ", num1%10);
	num1 /= 10;
	printf("%d", num1%10);
	
	return 0;
}
