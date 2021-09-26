#include <stdio.h>
#include <stdbool.h>

/*
	break의 가장 큰 특징은 현재 루프만 끝낸다는 점입니다. 
	따라서 중첩 루프의 안쪽 루프에서 break를 사용하면 
	안쪽 루프만 끝낼 뿐 바깥쪽 루프는 계속 반복됩니다. 
	그러다 보니 여기서는 변수 exitOuterLoop를 사용해서 
	바깥쪽 루프도 끝내겠다고 결정을 해주고 있습니다.
*/
int main() {
	int num1 = 0;
	
	bool exitOuterLoop = false; // 바깥쪽 루프를 빠져나올지 결정하는 변수
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num1 == 20) {              // num1이 20이라면
				exitOuterLoop = true;    // 바깥쪽 루프도 빠져나가겠음
				break;					 // 안쪽 루프를 끝냄
			}
			
			num1++;
		}
		
		if (exitOuterLoop == true)	   // 바깥쪽 루프도 빠져나오겠다고 결정했으면
			break;                     // 바깥쪽 루프를 끝냄
	}
	
	printf("%d\n", num1);
	
	return 0;
}
