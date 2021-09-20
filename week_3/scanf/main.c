#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2;
	
	printf("정수를 두 개 입력하세요: ");
	scanf("%d %d", &num1, &num2);	// 값을 두 개 입력받아서 변수 두 개에 저장
	
	printf("%d %d\n", num1, num2);	// 변수의 내용을 출
	
	return 0;
}
