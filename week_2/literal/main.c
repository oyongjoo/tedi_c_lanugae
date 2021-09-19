#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    const int con1 = 1;         // 상수. 선언과 동시에 초기화
    const float con2 = .2f;    // 상수. 선언과 동시에 초기화
    const char con3 = 'a';      // 상수. 선언과 동시에 초기화

    printf("%d %f %c\n", con1, con2, con3);    // 1 0.100000 a

    return 0;
}
