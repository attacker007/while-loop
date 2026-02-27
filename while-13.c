#include <stdio.h>
int main() {
    int gb, n, dd;
    int day = 0;
    int exhaustedDay = -1;
    int overused = 0;
    scanf("%d", &gb);
    scanf("%d", &n);
    while (day < n) {
        scanf("%d", &dd);
        day++;            
        gb -= dd;
        if (gb < 0 && exhaustedDay == -1) {
            exhaustedDay = day;
            overused = -gb;
        }
    }
    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }
    return 0;
}
