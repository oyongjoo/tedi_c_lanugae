#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int middle;
	
	if (a > b) {
		if (b > c) 
			middle = b;
		else {
			if (c > a)
				middle = a;
			else
				middle = c;
		}
	} else {
		if (a > c) 
			middle = a;
		else
			if (b>c) {
				middle = c;
			} else 
				middle = b;
	}
	printf("%d\n", middle);
	
	//if( a > b ) {
//		if (a > b && b > c) {
//			printf("%d\n", b);
//		} else if (a > c && c > b) {
//			printf("%d\n", c);			
//		} else if (b > a && a > c) {
//			printf("%d\n", a);
//		} else if (b > c && c > a) {
//			printf("%d\n", c);
//		} else if (c > a && a > b) {
//			printf("%d\n", a);
//		} else if (c > b && b > a) {
//			printf("%d\n", b);
//		}
	//}
	
	return 0;
}
