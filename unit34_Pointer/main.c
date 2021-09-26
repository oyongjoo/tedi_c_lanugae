#include <stdio.h>

int main()
{
	int *numPtr1;
	int **numPtr2;
	int num1 = 10;
	
	numPtr1 = &num1;
	numPtr2 = &numPtr1;
	
	**numPtr2 = 20;
	
	printf("%d, %d\n", **numPtr2, num1);
	
	return 0;
}
