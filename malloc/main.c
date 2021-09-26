#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>

int main()
{
	long long *numPtr = malloc(sizeof(long long));
	
	memset(numPtr, 0x27, 8);
	
	printf("%#llx\n", *numPtr);
	
	free(numPtr);

    return 0;
}
