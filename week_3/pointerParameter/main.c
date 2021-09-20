#include <stdio.h>
#include <stdlib.h>

void swapNumber(int *first, int *second) {
	int temp;
	
	temp = *first;
	*first = *second;
	*second = temp;
}

int main(int argc, char *argv[]) {
	int num1 = 10;
	int num2 = 20;
	
	swapNumber(&num1, &num2); // ���� num1�� num2�� �־���
	
	printf("%d, %d\n", num1, num2); // 10 20: swapNumber �Լ��ʹ� ������� 
									// ó�� ������ 10�� 20�� ��µ�
	
	return 0;
}
