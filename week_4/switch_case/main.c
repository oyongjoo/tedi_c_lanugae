#include <stdio.h>

int main() {
	int num1;
	
	scanf("%d", &num1);
	printf("%s\n", (num1 >= 1 && num1 <= 100) ? "정상" : (num1 > 100) ? "매우 큼":"매우 적음");
//	printf("%d일\n", date_cnt);
	
	return 0;
}
