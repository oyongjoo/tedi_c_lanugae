#define _CRT_SECURE_MO_WARNINGS
#include <stdio.h>

/* 아래 코드를 스파게티 코드라고 한다. 불필요한 goto는 자제하자.*/
int main() {
	int num1; //한글 
	
	scanf("%d", &num1);
	
    if (num1 == 1)         // num1이 1이면
        goto ONE;          // 레이블 ONE으로 즉시 이동
    else if (num1 == 2)    // num1이 2이면
        goto TWO;          // 레이블 TWO로 즉시 이동
    else                   // 1도 아니고 2도 아니면
        goto EXIT;         // 레이블 EXIT로 즉시 이동
		
ONE:	//Label ONE
	printf("1입니다.\n");
	goto EXIT;
	
TWO:	//Label TWO
	printf("2입니다.\n");
	goto EXIT;
	
EXIT:	// Label EXIT
	return 0;
}
