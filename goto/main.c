#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	/*
	** ����: ���� 1, ���� 2
	** ����
	** ���� ���� ����: �ڰ� 1, ������ 0
	*/
	int gender, age, isOwner;
	
	scanf("%d %d %d", &gender, &age, &isOwner);
	
	printf("�ȳ��ϼ���.\n");
	printf("���� ����\n");
	
	if (gender == 2 || age < 30 || isOwner < 0) {
		goto EXIT:		// ������ �߻������Ƿ� EXIT�� �̵�
	}
		
EXIT:
	printf("�ȳ����輼��.\n");	// ���� ó�� �ڵ带 �� ���� �����. 
	printf("���� �ݴ´�.\n");	
	
	return 0;
}
