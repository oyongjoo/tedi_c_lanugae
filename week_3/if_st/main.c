#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int balance = 10000;    // 교통카드 잔액
    int age;

    scanf("%d", &age);
    
    if (age >= 7 &&  age <= 12) 
	{
	    balance -= 450;
	    printf("450원이 차감되었습니다.\n");
	} else if (age >= 13 && age <= 18) {
	    balance -= 720;
	    printf("720원이 차감되었습니다.\n");
	} else if (age >= 19) {
	    balance -= 1200;
	    printf("1200원이 차감되었습니다.\n");
	}
	
	printf("%d\n", balance);
    
    return 0;
}
