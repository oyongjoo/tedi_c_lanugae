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
	
	if (gender == 2) {
		printf("안녕히계세요.\n");
		printf("문을 닫는다.\n");
		return 0;
	}
	
	if (age < 30) {
		printf("안녕히계세요.\n");
		printf("문을 닫는다.\n");
		return 0;		
	}
		
	if (isOwner < 0) {
		printf("안녕히계세요.\n");
		printf("문을 닫는다.\n");	
		return 0;	
	}
	
	return 0;
}
