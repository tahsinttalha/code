#include <stdio.h>

int summation(int num[], int index);

int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    //printf("%d\n", summation(a, 3));
    summation (a, 3);
    return 0;
}

int summation(int num[], int index)
{
    int sum = 0; 

    for (int i = 0; i < index; i++)
    {
        sum += num[i]; 
        //return sum;   
    }

    //return sum;

    printf("%d\n", sum);
}
