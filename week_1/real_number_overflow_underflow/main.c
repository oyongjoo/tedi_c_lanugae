#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1 = FLT_MIN; // float�� ��� �ּڰ�
	float num2 = FLT_MAX; // float�� ��� �ִ밪
	
	// float�� ��� �ּڰ��� 100000000.0���� ������ ���� ���� ���� �Ǹ鼭 ����÷ο� �߻�
	num1 = num1 / 100000000.0f;
	
	// float�� ��� �ִ񰪿� 1000.0�� ���ϸ� ������ �� �ִ� ������ �Ѿ�Ƿ� �����÷ο� �߻�
	num2 = num2 * 1000.0f;
	
	printf("%e %e\n", num1, num2); 	// 0.000000e+00 inf: �Ǽ��� ����÷ο�� 0
									// �����÷ο�� ���Ѵ밡 ��
	return 0;
}
