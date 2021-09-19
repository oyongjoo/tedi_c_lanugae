#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int8_t num1 = -128 - 1;					// 8비트(1바이트) 크기의 부호 있는 정수형 변수 선언
	int16_t num2 = INT16_MAX + 1;			// 16비트(1바이트) 크기의 부호 있는 정수형 변수 선언
	int32_t num3 = 2147483647 + 1;			// 32비트(1바이트) 크기의 부호 있는 정수형 변수 선언
	int64_t num4 = 9223372036854775807 + 1;	// 64비트(1바이트) 크기의 부호 있는 정수형 변수 선언
	
	// int8_t, int16_t, int32_t는 %d로 출력하고 int64_t는 %lld로 출력
	printf("%d %d %d %lld\n", num1, num2, num3, num4);
	
	uint8_t num5 = 255 + 1;                      // 8비트(1바이트) 크기의 부호 없는 정수형 변수 선언
	uint16_t num6 = 65535 + 1;                   // 16비트(2바이트) 크기의 부호 없는 정수형 변수 선언
    uint32_t num7 = UINT32_MAX + 1;              // 32비트(4바이트) 크기의 부호 없는 정수형 변수 선언
    uint64_t num8 = 18446744073709551615 +1 ;    // 64비트(8바이트) 크기의 부호 없는 정수형 변수 선언
 
    // uint8_t, uint16_t, uint32_t는 %u로 출력하고 uint64_t는 %llu로 출력
    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 255 65535 4294967295 18446744073709551615
	    
	return 0;
}
