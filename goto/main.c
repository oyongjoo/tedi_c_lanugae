#include <stdio.h>
#include <stdbool.h>

/*
	���� num1�� 20�� �Ǹ� goto�� ����Ͽ� 
	���̺� EXIT�� ��� �̵��մϴ�. 
	���� ���ʰ� �ٱ��� ������ break�� ���� �ʿ䰡 �����ϴ�.	
	��ó�� goto�� ���� ������ �������� �� �����մϴ�. 
	���⼭�� for �ݺ����� ���� ������� 
	while, do while�� �� ��ø ������ ���� ���� �� �ֽ��ϴ�.
*/
int main() {
	int num1 = 0;
	
	bool exitOuterLoop = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (num1 == 20) {	// num1�� 20�̶��
				goto EXIT;		// ���̺� EXIT�� ��� �̵�
			}
			
			num1++;
		}
	}
	
EXIT:
	printf("%d\n", num1);
	
	return 0;
}
