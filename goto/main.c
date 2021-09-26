#include <stdio.h>
#include <stdbool.h>

/*
	변수 num1이 20이 되면 goto를 사용하여 
	레이블 EXIT로 즉시 이동합니다. 
	따라서 안쪽과 바깥쪽 루프를 break로 끝낼 필요가 없습니다.	
	이처럼 goto는 다중 루프를 빠져나올 때 유용합니다. 
	여기서는 for 반복문을 예로 들었지만 
	while, do while로 된 중첩 루프도 빠져 나올 수 있습니다.
*/
int main() {
	int num1 = 0;
	
	bool exitOuterLoop = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num1 == 20) {	// num1이 20이라면
				goto EXIT;		// 레이블 EXIT로 즉시 이동
			}
			
			num1++;
		}
	}
	
EXIT:
	printf("%d\n", num1);
	
	return 0;
}
