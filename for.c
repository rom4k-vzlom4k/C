#include <stdio.h>

/* 
+For16°. Дано вещественное число A и целое число N (> 0). Используя один цикл, вывести все целые степени числа A от 1 до N. 
-Радкевич Роман Юрьевич
-03.05.2025
-9 минут

*/
int main() {
    double A;
    int N;
    
    scanf("%lf %d", &A, &N);
    
    double power = 1.0; 
    
    for (int i = 1; i <= N; i++) {
        power *= A;      
        printf("%g ", power);
    }
    
    return 0;
}