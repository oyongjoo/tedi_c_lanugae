#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float num1;
	
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &num1);		// �Ǽ��� �Է¹޾Ƽ� ������ ����
	
	printf("%f\n", num1);	// ������ ������ ���
	
	return 0;
}
