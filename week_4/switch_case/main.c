#include <stdio.h>

int main() {
	int num1;
	
	scanf("%d", &num1);
	printf("%s\n", (num1 >= 1 && num1 <= 100) ? "����" : (num1 > 100) ? "�ſ� ŭ":"�ſ� ����");
//	printf("%d��\n", date_cnt);
	
	return 0;
}
