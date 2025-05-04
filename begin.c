#include <stdio.h>

/* 
-Begin10°. Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов. 
-Радкевич Роман Юрьевич
-03.05.2025
-3 минуты

*/
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    
    double a_sq = a * a; // квадраты
    double b_sq = b * b;
    
    printf("Сумма %g\n", a_sq + b_sq);
    printf("Разность %g\n", a_sq - b_sq);
    printf("Произведение %g\n", a_sq * b_sq);
    printf("Частное %g\n", a_sq / b_sq);
    
    return 0;
}