#include <stdio.h>

int main() 
{
    int num1 = 2;
    int num2 = 8;
    int num3;
    int num4;

    num1++;
    num3 = --num1;
    
    --num2;
    num4 = num2++;

    printf("%d %d\n", num3, num4);    // 2 7
    printf("%d %d\n", num1, num2);

    return 0;
}
