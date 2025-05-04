#include <stdio.h>

/* 
Даны два числа. Вывести вначале большее, а затем меньшее из них. 
-Радкевич Роман Юрьевич
-03.05.2025
-3 минут

*/
int main() {
    int a, b;
    scanf("%d%d", &a, &b); 
    
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    
    printf("%d большее, %d меньшее", max, min);
    
    return 0;
}