#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    printf("0%lo\n", 017L);             // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL);            // unsigned long 크기의 8진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL);       // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL);    // unsigned long 크기의 16진 정수 리터럴

    return 0;
}
