#include <stdio.h>
#include <stdbool.h>
 
int main()
{
	bool b1;
	
	b1 = (false || false) && !false || false; 	// �� �������� �켱������ !, &&, || ��
	
	printf("%d\n", b1);
	
    return 0;
}
