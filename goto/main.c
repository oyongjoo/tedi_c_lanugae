#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	** 성별: 남자 1, 여자 2
	** 나이
	** 주택 소유 여부: 자가 1, 전월세 0
	*/
	int gender, age, isOwner;
	
	scanf("%d %d %d", &gender, &age, &isOwner);
	
	printf("안녕하세요.\n");
	printf("문을 연다\n");
	
	if (gender == 2 || age < 30 || isOwner < 0) {
		goto EXIT:		// 에러가 발생했으므로 EXIT로 이동
	}
		
EXIT:
	printf("안녕히계세요.\n");	// 에러 처리 코드를 한 번만 사용함. 
	printf("문을 닫는다.\n");	
	
	return 0;
}
