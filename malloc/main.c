#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>

int main()
{
	int *numPtr1 = NULL;
	
	if (numPtr1 == NULL) {
		numPtr1 = malloc(1024);
	}
	
	printf("%#p\n", numPtr1);

    return 0;
}
