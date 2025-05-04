#include <stdio.h>

/* 
Даны целые положительные числа M, N и набор из N чисел. Сформировать матрицу размера M × N, у которой в каждой строке содержатся все числа из исходного набора (в том же порядке). 
-Радкевич Роман Юрьевич
-03.05.2025
-14 минут

*/

int main() {
    int M, N;
    scanf("%d %d", &M, &N); 

    int matrix[10][10];
    // Ввод
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int transposed[10][10];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }

    // Вывод 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}