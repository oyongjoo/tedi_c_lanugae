#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(int argc, char *argv[]) {
	float num1;
	double num2;
	long double num3;
		
	printf("�Ǽ��� �Է��ϼ���: ");
	scanf("%f", &num1);		// �Ǽ��� �Է¹޾Ƽ� ������ ����
	
	printf("double �Ǽ��� �Է��ϼ���: ");
	scanf("%lf", &num2);    // �ڷ����� double�� ���� %lf
	
	printf("long double �Ǽ��� �Է��ϼ���: ");
	scanf("%Lf", &num3);    // �ڷ����� long double�� ���� %Lf
	
	printf("%f %f %Lf\n", num1, num2, num3);	// ������ ������ ���
	
	return 0;
}
