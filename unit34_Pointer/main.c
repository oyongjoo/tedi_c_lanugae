#include <stdio.h>

int main() {
	int num1 = 10;
	
	/*
	** 008AF7FC: num1�� �޸� �ּҸ� ���
	** ��ǻ�͸���, ������ ������ �޶���
	*/
	printf("%#x\n", &num1);
	
	return 0;
}
