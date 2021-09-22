#include <stdio.h>

int main() 
{
    float num1 = 0.0f;
    float num2 = 0.1f;
    
    for (int i = 0; i<10; i++) {
		num1 = num1 + num2;
	}
	
	// num1: 0.100000001490116
	if (num1 == 1.0f) printf("true\n");
	else printf("false\n");
	
	return 0;
}
