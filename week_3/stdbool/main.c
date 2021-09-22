#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

#define T "true"
#define F "false"

int main() {
	bool b1 = true;
	bool b2 = false;
	
	printf(b1 ? T:F);
	printf("\n");
	printf(b2 ? "true":"false");	
	printf("\n");	
	
	printf("%s\n", b1?T:F);
	printf("%s\n", b2?T:F);
	return 0;
}
