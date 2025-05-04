#include <stdio.h>

/* 
+Case3. Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). 
Вывести название соответствующего времени года («зима», «весна», «лето», «осень»). 
-Радкевич Роман Юрьевич
-03.05.2025
-6 минут

*/
int main() {
    int month;
    scanf("%d", &month);
    
    if (month == 12 || month == 1 || month == 2) {
        printf("зима");
    } else if (month >= 3 && month <= 5) {
        printf("весна");
    } else if (month >= 6 && month <= 8) {
        printf("лето");
    } else {
        printf("осень");
    }
    
    return 0;
}