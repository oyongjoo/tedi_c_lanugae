#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int num1 = 5;
    int num2;
    
    num2 = (num1 == 10) ? 100:200; // ���׿�����: num1�� ���̸� num2�� 100�� �Ҵ�, �����̸� num2�� 200�� �Ҵ�
    
    printf("%d\n", num2);
    
    return 0;
}
