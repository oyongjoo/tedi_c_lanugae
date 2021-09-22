#include <stdio.h>

int main() 
{
    float num1 = 0.0f;
    float num2 = 0.1f;
    
    for (int i = 0; i<10; i++) {
		num1 = num1 + num2;
	}
	
	printf("%.15f\n", num1);
	
	return 0;
}
