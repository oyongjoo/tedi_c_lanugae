#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	// 10진수는 숫자 그대로 표기하면 되고, 8진수는 숫자 앞에 0을 붙이고, 16진수는 0x를 븥
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴

    return 0;
}임
