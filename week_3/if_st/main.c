#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int time;
    scanf("%d", &time);
    
    int hour = time / 3600;
    int min = (time%3600)/60;
    int sec = (time%3600)%60;
    
    printf("%d �ð� %d �� %d ��\n", hour, min, sec);
        
    return 0;
}
