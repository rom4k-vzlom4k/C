#include <stdio.h>

/* 
+Param1°. Описать функцию MinElem(A, N) целого типа, находящую минимальный элемент целочисленного массива A размера N. С помощью этой функции найти минимальные элементы массивов A, B, C размера NA, NB, NC соответственно. 
-Радкевич Роман Юрьевич
-03.05.2025
-15 минут

*/

int MinElem(int A[], int N) {
    int min = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min) {
            min = A[i];
        }
    }
    return min;
}

int main() {
    int NA, NB, NC;
    

    scanf("%d", &NA);
    int A[NA];
    for (int i = 0; i < NA; i++) {
        scanf("%d", &A[i]);
    }
    
    scanf("%d", &NB);
    int B[NB];
    for (int i = 0; i < NB; i++) {
        scanf("%d", &B[i]);
    }
    
    scanf("%d", &NC);
    int C[NC];
    for (int i = 0; i < NC; i++) {
        scanf("%d", &C[i]);
    }
    
    printf("Min A: %d\n", MinElem(A, NA));
    printf("Min B: %d\n", MinElem(B, NB));
    printf("Min C: %d\n", MinElem(C, NC));
    
    return 0;
}
