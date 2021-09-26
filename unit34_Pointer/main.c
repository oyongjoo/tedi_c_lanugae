#include <stdio.h>

int main()
{
	const int num1 = 10;
	const int num2 = 30;
	int * const snumPtr = &num1;
	
	numPtr = &num2;
	*numPtr = 20;   
	
	printf("%#x, %d\n", numPtr, *numPtr);

    return 0;
}
