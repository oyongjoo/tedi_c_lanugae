#include <stdio.h>

int main()
{
    char c1 = 'a';			// 문자 a 할당
    char c2 = 'b';			// 문자 b 할당
    char linefeed = '\n'; 	// 제어 문자 \n 할당

    printf("%c%c%c%c", c1, linefeed, c2, linefeed);    // 0 48: 문자 상태로 0이 출력됨
    return 0;
}
