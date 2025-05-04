#include <stdio.h>

/* 
+Proc1. Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). С помощью этой процедуры найти третьи степени пяти данных чисел. 
-Радкевич Роман Юрьевич
-03.05.2025
-12 минут

*/

void PowerA3(double A, double *B) {
    *B = A * A * A;
}

int main() {
    double num, result;
    
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &num);
        PowerA3(num, &result);
        printf("%.3f ", result);
    }
    
    return 0;
}