#include <stdio.h>

int main()
{
    char c1 = 'a';			// ���� a �Ҵ�
    char c2 = 'b';			// ���� b �Ҵ�
    char linefeed = '\n'; 	// ���� ���� \n �Ҵ�

    printf("%c%c%c%c", c1, linefeed, c2, linefeed);    // 0 48: ���� ���·� 0�� ��µ�
    return 0;
}
