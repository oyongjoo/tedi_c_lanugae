#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
	int index = 10;
	int count = sizeof(numArr) / sizeof(int);
	
//    printf("%d\n", sizeof(numArr));                  // 40: 4바이트 크기의 요소가 10개이므로 40
//    printf("%d\n", sizeof(numArr) / sizeof(int));    // 10: 배열의 크기를 구할 때는
                                                     // 전체 공간을 요소의 크기로 나눠줌
	if (index <= count - 1) {
		numArr[index] = 999;
	}
	
	
	for (int i = 0; i < count; i++) {
		printf("%d\n", numArr[i]);
	}
    return 0;
}
