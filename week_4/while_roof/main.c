#include <stdio.h>
#include <stdlib.h>    // srand, rand �Լ��� ����� ��� ����
#include <time.h>      // time �Լ��� ����� ��� ����

int main() {
	srand(time(NULL));	//���� �ð������� �õ� ����
	
	int i = 0;
	while(i != 3) {			// 3�� �ƴ� �� ��� �ݺ�
		i = rand() % 10;
		printf("%d\n", i);	// rand �Լ��� ����Ͽ� �������� ������ ������ �� 10 �̸��� ���ڷ� ����
	}
	
	return 0;
}
