#define _CRT_SECURE_MO_WARNINGS
#include <stdio.h>

/* �Ʒ� �ڵ带 ���İ�Ƽ �ڵ��� �Ѵ�. ���ʿ��� goto�� ��������.*/
int main() {
	int num1; //�ѱ� 
	
	scanf("%d", &num1);
	
    if (num1 == 1)         // num1�� 1�̸�
        goto ONE;          // ���̺� ONE���� ��� �̵�
    else if (num1 == 2)    // num1�� 2�̸�
        goto TWO;          // ���̺� TWO�� ��� �̵�
    else                   // 1�� �ƴϰ� 2�� �ƴϸ�
        goto EXIT;         // ���̺� EXIT�� ��� �̵�
		
ONE:	//Label ONE
	printf("1�Դϴ�.\n");
	goto EXIT;
	
TWO:	//Label TWO
	printf("2�Դϴ�.\n");
	goto EXIT;
	
EXIT:	// Label EXIT
	return 0;
}
