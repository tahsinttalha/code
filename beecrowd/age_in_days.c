#include <stdio.h>
 
int main() {
    int day, years = 0, months = 0, days = 0;
    scanf("%d", &day);
    
    if (day >= 365)
    {
        years = day / 365;
        day = day - (years * 365);
        days = day;
    }

    if (day >= 30 && day < 365)
    {
        months = day / 30;
        days = day - months * 30;
    }
    else{ days = day;}
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    return 0;
}