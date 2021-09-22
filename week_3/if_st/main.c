#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num1 = 5;
    int num2;
    
    num2 = (num1 == 10) ? 100:200; // 삼항연산자: num1이 참이면 num2에 100을 할당, 거짓이면 num2에 200을 할당
    
    printf("%d\n", num2);
    
    return 0;
}
