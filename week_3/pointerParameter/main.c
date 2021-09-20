#include <stdio.h>
#include <stdlib.h>

void swapNumber(int first, int second) {
	int temp;
	
	temp = first;
	first = second;
	second = temp;
}

int main(int argc, char *argv[]) {
	int num1 = 10;
	int num2 = 20;
	
	swapNumber(num1, num2); // 변수 num1과 num2를 넣어줌
	
	printf("%d, %d\n", num1, num2); // 10 20: swapNumber 함수와는 상관없이 
									// 처음 저장한 10과 20이 출력됨
	
	return 0;
}
