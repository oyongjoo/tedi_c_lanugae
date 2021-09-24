#include <stdio.h>

int main() {
	int month;
	int date_cnt = 0;
	
	scanf("%d", &month);
	
	if (month < 1 || month > 12) {
		printf("����: 1 ~ 12 ������ ���ڸ� �Է��� �ּ���. ");
		return 1;
	}
	
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			date_cnt = 31;
			break;
			
		case 2:
			date_cnt = 28;
			break;
			
		case 4:
		case 6:
		case 9:
		case 11:
			date_cnt = 30;
			break;
	}
	printf("%d��\n", date_cnt);
	
	return 0;
}
