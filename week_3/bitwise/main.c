#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    unsigned int num1;
    unsigned int num2;
    
    scanf("%u %u", &num1, &num2);
    
//    printf("%u\n", num1 ^ num2);
//    printf("%u\n", num1 | num2);
//    printf("%u\n", num1 & num2);
//    printf("%u\n", ~num1);

	printf("%u\n%u\n%u\n%u\n", num1^num2, num1|num2, num1&num2, ~num1);
    
    return 0;
}
