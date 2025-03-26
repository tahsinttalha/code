#include <stdio.h>
 
int main() {
    int N, hrs = 0, mins = 0, sec = 0;

    scanf("%d", &N);
    
    mins = N / 60;
    sec = N - mins * 60;

    if (mins / 60 > 0)
    {
        hrs = mins / 60;
        mins = mins - hrs *60;
    }

    printf("%d:%d:%d\n", hrs, mins, sec);
    return 0;
}