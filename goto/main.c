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
	
	if (gender == 2) {
		printf("�ȳ����輼��.\n");
		printf("���� �ݴ´�.\n");
		return 0;
	}
	
	if (age < 30) {
		printf("�ȳ����輼��.\n");
		printf("���� �ݴ´�.\n");
		return 0;		
	}
		
	if (isOwner < 0) {
		printf("�ȳ����輼��.\n");
		printf("���� �ݴ´�.\n");	
		return 0;	
	}
	
	return 0;
}
