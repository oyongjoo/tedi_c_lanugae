#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int balance = 10000;    // ����ī�� �ܾ�
    int age;

    scanf("%d", &age);
    
    if (age >= 7 &&  age <= 12) 
	{
	    balance -= 450;
	    printf("450���� �����Ǿ����ϴ�.\n");
	} else if (age >= 13 && age <= 18) {
	    balance -= 720;
	    printf("720���� �����Ǿ����ϴ�.\n");
	} else if (age >= 19) {
	    balance -= 1200;
	    printf("1200���� �����Ǿ����ϴ�.\n");
	}
	
	printf("%d\n", balance);
    
    return 0;
}
