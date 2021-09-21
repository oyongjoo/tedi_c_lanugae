#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    scanf("%d", &num1);
    
    if (num1 < 18)
    {
        printf("청소년 관람 불가");
    }
    
    return 0;
}
