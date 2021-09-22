#define __USE_MINGW_ANSI_STDIO 1 // Dev-C++(MinGW)에서 %hhu를 사용하기 위한 설정
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
	char *str;
	
	scanf("%[^\n]s", str);
		
	printf("%s\n", str);
		
    return 0;
}
