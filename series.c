#include <stdio.h>

/* 
+Series17°. Дано вещественное число B, целое число N и набор из N вещественных чисел, упорядоченных по возрастанию. Вывести элементы набора вместе с числом B, сохраняя упорядоченность выводимых чисел. 
-Радкевич Роман Юрьевич
-03.05.2025
-13 минут

*/
int main() {
    double B, num;
    int N, inserted = 0;
    
    scanf("%lf %d", &B, &N);
    
    for(int i = 0; i < N; i++) {
        scanf("%lf", &num);
        
        if(!inserted && num >= B) {
            printf("%.2lf ", B);
            inserted = 1; 
        }
        printf("%.2lf ", num);
    }
    
    if(!inserted) printf("%.2lf ", B);
    
    return 0;
}