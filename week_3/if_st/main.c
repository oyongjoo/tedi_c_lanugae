#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int korean, english, mathematics, science;
    
    scanf("%d %d %d %d", &korean, &english, &mathematics, &science);
    
    int average = (korean + english + mathematics + science) / 4;
    if ( (korean >= 0 && korean <= 100) && (english >= 0 && english <= 100) && (mathematics >= 0 && mathematics <= 100) && (science >= 0 && science <= 100))
    {
        if (average >= 85) 
        {
            printf("�հ��Դϴ�.\n");
        }
        else
        {
            printf("���հ��Դϴ�.\n");
        }
    }
    else
    {
        printf("�߸��� ����\n");
    }
    
    return 0;
}
