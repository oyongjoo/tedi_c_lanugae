#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    char ch;
    
    scanf("%c", &ch);
    
    if (ch == 'a') 
    {
        printf("a입니다.");
    }
    else
    {
        printf("a가 아닙니다.");
    }
    
    return 0;
}
