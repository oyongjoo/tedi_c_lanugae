#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int8_t num1 = -128 - 1;					// 8��Ʈ(1����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
	int16_t num2 = INT16_MAX + 1;			// 16��Ʈ(1����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
	int32_t num3 = 2147483647 + 1;			// 32��Ʈ(1����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
	int64_t num4 = 9223372036854775807 + 1;	// 64��Ʈ(1����Ʈ) ũ���� ��ȣ �ִ� ������ ���� ����
	
	// int8_t, int16_t, int32_t�� %d�� ����ϰ� int64_t�� %lld�� ���
	printf("%d %d %d %lld\n", num1, num2, num3, num4);
	
	uint8_t num5 = 255 + 1;                      // 8��Ʈ(1����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
	uint16_t num6 = 65535 + 1;                   // 16��Ʈ(2����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
    uint32_t num7 = UINT32_MAX + 1;              // 32��Ʈ(4����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
    uint64_t num8 = 18446744073709551615 +1 ;    // 64��Ʈ(8����Ʈ) ũ���� ��ȣ ���� ������ ���� ����
 
    // uint8_t, uint16_t, uint32_t�� %u�� ����ϰ� uint64_t�� %llu�� ���
    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 255 65535 4294967295 18446744073709551615
	    
	return 0;
}
